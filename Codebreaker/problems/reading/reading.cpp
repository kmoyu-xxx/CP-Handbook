#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 1000000007
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    fastio;
    int n, k, t=0; cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int w, p; cin >> w >> p;
        if (w < (k + (p - 1)) / p) t++;
    }
    cout << t;
}