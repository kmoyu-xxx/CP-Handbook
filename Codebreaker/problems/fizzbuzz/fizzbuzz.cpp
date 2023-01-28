#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
signed main() {
    fast;
    int n, a, b; cin >> n >> a >> b;
    for (int i = 1; i <= n; i++) {
        if (i % a == 0 && i % b == 0) cout << "FizzBuzz\n";
        else if (i % a == 0) cout << "Fizz\n";
        else if (i % b == 0) cout << "Buzz\n";
        else cout << i << endl;
    }
}