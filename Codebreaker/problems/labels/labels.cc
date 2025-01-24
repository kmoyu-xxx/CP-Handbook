#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, c=0, lo=0, hi=0; cin >> n;
    vector<int> V;

    for (int i = 0; i < n-1; i++) {
        int x; cin >> x; c += x;
        lo = min(lo, c); hi = max(hi, c);
        V.push_back(x);
    }

    if (hi - lo != n-1) {
        cout << -1; 
    } else {
        c = (1 - lo); cout << c << " ";
        for (auto x: V) {
            c += x; cout << c << " ";
        }
    }
}