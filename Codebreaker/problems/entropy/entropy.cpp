#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pleasehelp cout << "anyone there?\n";
using namespace std;
signed main() {
    fastio;
    int n, k, t=1e9; cin >> n >> k;
    vector<int> E(n);
    for (int i = 0; i < n; i++) cin >> E[i];
    for (int i = 0; i <= k; i++) {
        t = min(t, abs(E[n-k-1+i] - E[i]));
    }
    if (n <= k+1) t = 0;
    cout << t;
}