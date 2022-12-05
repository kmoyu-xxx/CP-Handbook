#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pleasehelp cout << "anyone there?\n";
using namespace std;
signed main() {
    int n, m, current=-1e9, ans=0; cin >> n >> m;
    vector<pair<int, int>> ranges;
    for (int i = 0; i < n; i++) {
        int d, r; cin >> d >> r;
        // r and l
        ranges.push_back(make_pair(d+r, d-r));
    }

    sort(ranges.begin(), ranges.end());

    for (int i = 0; i < n; i++) {
        int l = ranges[i].second;
        int r = ranges[i].first;

        if (current < l) {
            current = r;
            ans++;
        }
    }

    cout << ans;
}