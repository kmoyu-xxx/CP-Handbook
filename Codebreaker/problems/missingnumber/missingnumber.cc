#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n; cin >> n;
    vector<int> V(n-1);
    for (int i = 0; i < n-1; i++) cin >> V[i];
    sort(V.begin(), V.end());
    for (int i = 0; i < n; i++) {
        if (V[i] != i+1) {
            cout << i+1;
            return 0;
        }
    }
    cout << n;
}