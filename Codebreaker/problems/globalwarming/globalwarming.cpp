#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pleasehelp cout << "anyone there?\n";
using namespace std;
signed main() {
    fast;
    int n, islands=0, best=0; cin >> n;
    vector<pair<int, int>> alts(n+2);
    vector<int> passed(n+2, 1);

    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        alts.push_back(make_pair(x, i));
    }

    sort(alts.begin(), alts.end());

    while (!alts.empty()) {
        pair<int, int> same = alts.back();
        while (!alts.empty() && same.first == alts.back().first) {
            pair<int, int> alt = alts.back();
            passed[alt.second] = 0;
            alts.pop_back();
            if (passed[alt.second-1] == 1 && passed[alt.second+1] == 1) {
                islands++;
            } else if (passed[alt.second-1] == 0 && passed[alt.second+1] == 0) {
                islands--;
            }
        }
        best = max(best, islands);
    }

    cout << best;
}