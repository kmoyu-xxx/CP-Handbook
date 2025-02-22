// NOI 2025 Qualifications Q2
#include <bits/stdc++.h>
#define int long long 
#define endl "\n"
using namespace std;
signed main() {
    int n, d, ans=0; cin >> n >> d;
    vector<int> a(n);
    vector<pair<int, int>> s;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 1; i < n; i++) {
        while (!s.empty() && s[s.size()-1].first <= a[i]) {
            s.pop_back();
        } 
        s.push_back(make_pair(a[i], i));
    }

    for (int i = 0; i < s.size(); i++) {
        if (i == 0) ans += s[i].first * s[i].second;
        else ans += s[i].first * (s[i].second - s[i-1].second);
    }

    cout << ans;
}

// monotonic stack?