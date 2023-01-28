#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
signed main() {
    fast;
    int n, t, c=0; cin >> n >> t;
    for (int i = 1; i <= n; i++) {
        c += t / i;
    }
    cout << c;
}