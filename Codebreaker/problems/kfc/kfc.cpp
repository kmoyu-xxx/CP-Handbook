#include <bits/stdc++.h>
#define int long double
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
signed main() {
    fast;
    int t, n, x, k; cin >> t >> n >> x >> k;
    for (int i = 0; i < n; i++) {
        int d, s, w; cin >> d >> s >> w;
        t -= d/s + w;
    }
    t -= x/k;
    cout << static_cast<long long>(round(t));
}