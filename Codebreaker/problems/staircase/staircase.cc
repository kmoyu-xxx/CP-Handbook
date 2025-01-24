#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, t=1; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x == t) t++;
    }
    cout << t-1;
}