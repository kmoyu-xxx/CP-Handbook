#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int q; cin >> q;
    deque<int> d;

    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        if (x == 1) {
            int a; cin >> a;
            d.push_back(a);
        } else if (x == 2) {
            if (!d.size()) continue;
            d.pop_front();
        } else if (x == 3) {
            int j; cin >> j;
            if (j > d.size()) cout << -1 << endl;
            else cout << d[j-1] << endl;
        }
    }
}