#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ping cout << "pong\n";
using namespace std;
signed main() {
    fast;
    int n, m; cin >> n >> m;
    vector<int> V(n, 0);
    for (int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        a--; b--;
        V[a] = max(V[a], c);
        V[b] = max(V[b], c);
    }
    for (int i = 0; i < n; i++) if (V[i] == 0) V[i] = 1;
    for (auto x: V) cout << x << " ";
}