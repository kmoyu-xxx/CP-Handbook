#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
signed main() {
    int n, e; cin >> n >> e;
    vector<pair<int, int>> adj[n+2];
    vector<int> distance(n+2, 1e18);
    vector<int> processed(n+2, false);
    priority_queue<pair<int, int>> q;

    for (int i = 0; i < e; i++) {
        int a, b, w; cin >> a >> b >> w;
        adj[a].push_back(make_pair(b, w));
        adj[b].push_back(make_pair(a, w));
    } 

    distance[1] = 0;
    q.push(make_pair(0, 1));
    while (!q.empty()) {
        int a = q.top().second; q.pop();
        if (processed[a]) continue;
        processed[a] = true;
        for (auto u: adj[a]) {
            int b = u.first, w = u.second;
            if (max(distance[a], w) < distance[b]) {
                distance[b] = max(distance[a], w);
                q.push({-distance[b], b});
            }
        }
    }

    cout << distance[n];
}