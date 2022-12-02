#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pleasehelp cout << "anyone there?\n";
using namespace std;
void solve() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    int lo=1, hi=100000;
    while (lo < hi) {
        int x = lo + (hi - lo) / 2;
        int result = a*x*x*x + b*x*x + c*x;
        if (result < d) {
            lo = x + 1;
        } else {
            hi = x;
        }
    }
    cout << hi << endl;
}

signed main() {
    fastio;
    int q; cin >> q;
    while (q--) solve();
}
