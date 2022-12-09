#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
signed main() {
    fast;
    int n, m; cin >> n >> m;
    vector<int> D(n);
    for (int i = 0; i < n; i++) cin >> D[i];
    for (int i = 0; i < m; i++) {
        int t; cin >> t;
        if (t == 0) {
            int a, b, ans=-1e10; cin >> a >> b;
            for (int j = a; j <= b; j++) ans = max(ans, D[j]);
            cout << ans << endl;
        } else {
            int x, y; cin >> x >> y;
            D[x] = y;
        }
    }
}