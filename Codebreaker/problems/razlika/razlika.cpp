#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pleasehelp cout << "anyone there?\n";
using namespace std;
signed main() {
    fast;
    int n, k; cin >> n >> k;
    vector<int> V(n);
    deque<pair<int, int>> dq;
    for (int i = 0; i < n; i++) cin >> V[i];
    sort(V.begin(), V.end());
    k = n-k;
    int t=1000000;
    for (int i = 1; i < n; i++) {
        if (!dq.empty() && dq.front().second-1 <= i-k) dq.pop_front();
        int diff = V[i]-V[i-1];
        while (!dq.empty() && dq.back().first >= diff) dq.pop_back();
        dq.push_back(make_pair(diff, i));
        if (i >= k-1) t = min(t, (V[i]-V[i-k+1]) + dq.front().first);
    }
    cout << t;
}

