#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, t=0; cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x > 1e5) {
            t++; continue;
        } 
        m[x]++;
    }
    for (int i = 1; i <= 1e5; i++) {
        if (m[i] >= i) t += m[i] - i;
        else t += m[i];
    }
    cout << t;
}