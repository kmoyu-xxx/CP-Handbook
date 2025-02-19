#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, k, ans=0; cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x <= i - ans) ans++;
    }
    cout << n - ans;
}