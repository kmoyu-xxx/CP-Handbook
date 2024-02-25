#include <bits/stdc++.h>
#define int long long 
using namespace std;
signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n, x, y; cin >> n >> x >> y;
    int t = 0;
    vector<int> V;
    for (int i = 0; i < n; i++) {
        int c; cin >> c;
        V.push_back(c);
    }
    for (auto c: V) {
        if (x * c < y) {
            t += x * c;
        } else {
            t += y;
        }
    }
    cout << t;
}