#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n; cin >> n;
    vector<pair<int, int>> v;
    vector<int> r;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n-1; i++) {
        if (v[i].first != v[i+1].first) r.push_back(v[i].second);
    }
    if (v[n-2].first != v[n-1].first || v[n-2].second < v[n-1].second) r.push_back(v[n-1].second);

    int best=r[r.size()-1], useless=0;
    for (int i = r.size()-2; i >= 0; i--) {
        if (r[i] > best) {
            best = r[i];
        } else {
            useless++;
        }
    }
    
    cout << r.size() - useless;
}