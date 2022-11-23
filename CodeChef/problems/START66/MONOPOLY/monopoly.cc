#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
void solve() {
    int r1, r2, r3; cin >> r1 >> r2 >> r3;
    if (r1 > r2 + r3 || r2 > r1 + r3 || r3 > r1 + r2) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

signed main() {
    fastio;
    int tc; cin >> tc;
    while (tc--) solve();
}