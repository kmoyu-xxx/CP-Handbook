#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
signed main() {
    fast;
    int n; cin >> n;
    string s; cin >> s;
    if (n == 1) cout << "one";
    else if (n == 9) cout << 9;
    else if (s == "hello") cout << "world";
    else if (s == "world" && n == 3) cout << "andss";
    else if (s == "hmm" || n == 20) cout << "sus";
    else if (s.length() > 5) cout << "long";
    else if (s.length() == n) cout << "equal";
    else if (n % 2 == 0) cout << "222222222222222222222";
    else cout << "clown";
}