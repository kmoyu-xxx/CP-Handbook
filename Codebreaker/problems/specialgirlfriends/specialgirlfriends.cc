#include <bits/stdc++.h>
#include <cmath>
#define int long long
using namespace std;
int exponentiation(int a, int b, int m) {
    int v = 1;
    while (b > 0) {
        if (b & 1) {
            v = (v * a) % m;
        }
        a = (a * a) % m;
        b >>= 1;
    }
    return v % m;
}
signed main() {
    int m=1e9+7, n, t, ans=0; cin >> n >> t;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        ans += exponentiation(x, t, m);
    }
    cout << ans % m;
}