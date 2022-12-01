#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pleasehelp cout << "anyone there?\n";
using namespace std;
signed main() {
    fastio;
    int q, rained=0; cin >> q;
    set<int> cups;
    for (int i = 0; i < q; i++) {
        int query, x; cin >> query >> x;
        if (query == 1) {
            if (cups.count(x - rained) > 0) cout << "YES\n";
            else cout << "NO\n";
        } else if (query == 2) {
            cups.insert(x - rained);
        } else {
            rained += x;
        }
    }
}