#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, k, t=0; cin >> n >> k;
    map<set<int>, int> ls;
    for (int i = 0; i < n; i++) {
        set<int> l;
        for (int j = 0; j < k; j++) {
            int x; cin >> x;
            l.insert(x);
        }
        ls[l]++; t = max(t, ls[l]);
    }
    cout << t;
}