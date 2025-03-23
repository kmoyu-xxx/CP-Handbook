#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
signed main() {
    int n, k, ans=0; cin >> n >> k;
    vector<pair<int, int>> v;
    set<int> b, det;

    for (int i = 0; i < n; i++) {
        int a, h; cin >> a >> h;
        v.push_back(make_pair(a, h));
    }

    for (int i = 0; i < k; i++) {
        int x; cin >> x;
        b.insert(x);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        int a = v[i].first, h = v[i].second, bomb;

        auto it = b.lower_bound(a);
        if (it == b.begin()) {
            bomb = *it;
        } else if (it == b.end()) {
            it--; bomb = *it;
        } else {
            int hi = *it; it--;
            int lo = *it;
            if (a - lo < hi - a) bomb = lo;
            else if (a - lo > hi - a) bomb = hi;
            else {
                if (det.find(lo) != det.end()) bomb = lo;
                else bomb = hi;
            }
        }

        int dist = abs(bomb - a);
        if (dist < h) {
            det.insert(bomb);
            ans += dist;
        } else {
            ans += h;
        }
    }

    ans += det.size();
    cout << ans;
}