#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
bool comparator (pair<int, int> A, pair<int, int> B) {
    if (A.first == B.first) return A.second > B.second;
    else return A.first < B.first;
}

signed main() {
    fast;
    int w, n, min_routers=1, cur=0, idx=0, furthest=0; cin >> w >> n;
    bool valid=true;
    vector<pair<int, int>> routers;

    for (int i = 0; i < n; i++) {
        int a, r; cin >> a >> r;
        // l and r
        routers.push_back(make_pair(max((int)0, a-r), min(w, a+r)));   
        furthest = max(furthest, a+r) ;
    }

    sort(routers.begin(), routers.end(), comparator);

    cur = routers[0].second;

    if (routers[0].first > 0 || furthest < w) {
        valid = false;
    } else {
        while (idx < n && cur < w) {
            int best=0;
            while (idx + 1 < n && routers[idx+1].first <= cur) {
                idx++;
                if (routers[idx].second > routers[best].second) best = idx;
            }
            if (!best) {
                valid = false;
                break;
            }
            cur = routers[best].second;
            min_routers++;
        }
    }

    if (valid) cout << min_routers;
    else cout << -1;
}

