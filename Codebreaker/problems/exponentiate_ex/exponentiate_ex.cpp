#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ping cout << "pong\n";
using namespace std;
__int128 read() {
    __int128 x=0, sign=1;
    string input; cin >> input;
    for (char c: input) {
        if (c == '-') sign = -1;
        else x = x * 10 + c - '0';
    }
    return x * sign;
}

void print(__int128 x) {
    if (x < 0) {
        cout << '-';
        x = -x;
    } 
    if (x > 9) {
        print(x / 10);
    }
    char c = x % 10 + '0';
    cout << c;
}

__int128 exponentiation(__int128 a, __int128 b, __int128 m) {
    a %= m;
    __int128 v = 1;
    while (b > 0) {
        if (b & 1) {
            v = (v * a) % m;
        }
        a = (a * a) % m;
        b >>= 1;
    }
    return v;
}

signed main() {
    fast;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        __int128 a, b, m;
        a = read(); b = read(); m = read();
        print(exponentiation(a, b, m)); cout << endl;
    }
}