#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
signed main() {
    int n, ans=0; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x == 8) ans++;
    }
    cout << ans;
}