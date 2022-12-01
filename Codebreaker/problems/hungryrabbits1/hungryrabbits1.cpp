#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
signed main() {
    fastio;
    int n, best=0; cin >> n;
    vector<int> C(n), V;
    for (int i = 0; i < n; i++) {
        cin >> C[i];
    }

    for (int i = 0; i < n; i++) {
        if (C[i] != 0) {
            int left = C[i]+i;
            int right = C[i]+(n-i-1);
            V.push_back(max(left, right));
        }
    }

    for (auto x: V) {
        best = max(best, x);
    }

    cout << best;
}
