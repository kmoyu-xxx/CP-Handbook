#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pleasehelp cout << "anyone there?\n";
using namespace std;
signed main() {
    fast;
    int n, best=1e9; cin >> n;
    vector<pair<int, int>> cows;
    set<int> seen;
    map<int, int> ids;
    for (int i = 0; i < n; i++) {
        int x, id; cin >> x >> id;
        cows.push_back(make_pair(x, id));
        seen.insert(id);
    }

    int unique = seen.size();
    seen.clear();
    sort(cows.begin(), cows.end());

    int l=0, r=0;

    for (int i = 0; i < n; i++) {
        seen.insert(cows[r].second);
        ids[cows[r].second]++;
        while ((long long)seen.size() >= unique) {
            best = min(best, cows[r].first - cows[l].first);
            ids[cows[l].second]--;
            if (ids[cows[l].second] == 0) {
                seen.erase(cows[l].second);
            }
            l++;
        }
        r++;
    }

    cout << best;
}

