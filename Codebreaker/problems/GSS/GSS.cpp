#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n,t=0; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < n; i++) {
        if (i % 4 % 3 == 0 && i % 4 != 0) continue;
        t += v[i];
    }
    cout << t;
}