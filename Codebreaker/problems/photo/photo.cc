#include <bits/stdc++.h>
#define int long long 
using namespace std;
signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n, s; cin >> n >> s;
    vector<pair<int, int>> students;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < s; j++) {
            int x; cin >> x;
            students.push_back(make_pair(x, i));
        }
    }
    sort(students.begin(), students.end());

    int ans=1e9;
    map<int, int> tracker;
    set<int> last_ditch;
    for (int i = 0; i < n; i++) tracker[i] = -1;

    for (int i = 0; i < students.size(); i++) {
        int ban = students[i].second;
        if (tracker[ban] != -1) last_ditch.erase(tracker[ban]);
        last_ditch.insert(i);
        tracker[ban] = i;

        if (last_ditch.size() != n) continue;

        int lo = *last_ditch.begin();
        auto it = last_ditch.end();
        --it;
        int hi = *it;

        ans = min(ans, students[hi].first - students[lo].first);
    }

    cout << ans;
}