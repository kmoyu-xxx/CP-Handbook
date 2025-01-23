#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, best=0, t=0; cin >> n;
    vector<int> A(n), B(n), V(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> B[i];
    for (int i = n-1; i >= 0; i--) {
        best = max(best, B[i]);
        t += best * A[i];
    }
    cout << t;
}