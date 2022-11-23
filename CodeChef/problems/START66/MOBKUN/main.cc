#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
void solve() {
    // normal days, mob days, no per mob, given x
    int n, m, k, x; cin >> n >> m >> k >> x;
    
    int days_per_set = (k-1)*n + (n + m);
    int t = x % days_per_set;
    
    if (t > n*(k-1) || t == 0) cout << "YES\n";
    else cout << "NO\n";
    
}

signed main() {
    fastio;
    int tc; cin >> tc;
    while (tc--) solve();
}