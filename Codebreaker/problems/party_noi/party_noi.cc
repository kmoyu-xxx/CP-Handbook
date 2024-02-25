#include <bits/stdc++.h>
#define int long long 
using namespace std;
signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    vector<int> V;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        V.push_back(x);
    }
    sort(V.rbegin(), V.rend());
    int t = 0;
    if (n % 2 == 0) {
        for (int i = 0; i < n/2; i++) {
            if (V[i] > 0) {
                t += V[i];
            }
        }
    } else {
        for (int i = 0; i < n/2+1; i++) {
            if (V[i] > 0) {
                t += V[i];
            }
        }
    }

    cout << t;
}