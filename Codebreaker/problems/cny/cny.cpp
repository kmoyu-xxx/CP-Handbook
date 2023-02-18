#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ping cout << "pong\n";
using namespace std;
signed main() {
    int n, m, t=0; cin >> n >> m;
    vector<int> V;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x % 2 == 0) V.push_back(x);
    }
    sort(V.rbegin(), V.rend());
    for (int i = 0; i < m; i++) {
        if (i >= V.size()) break;
        t += V[i];
    }
    cout << t;
}