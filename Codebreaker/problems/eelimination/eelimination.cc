#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    vector<int> V(n); stack<pair<int, int>> s; 

    // monotonic stack
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        while (!s.empty() && s.top().first < x) {
            V[s.top().second] = i+1;
            s.pop();
        }
        s.push(make_pair(x, i));
    }

    for (auto x: V) {
        cout << x << " ";
    }
}

