#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, r, t=0; cin >> n >> r;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (r > x) t++;
    }
    cout << t;
}