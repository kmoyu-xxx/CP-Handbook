#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
	ios::sync_with_stdio(false); cin.tie(0);
    deque<int> d;
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        if (x == 1) {
            int n; cin >> n;
            d.push_back(n);
        } else if (x == 2) {
            d.pop_back();
        } else { // x == 3
            cout << d.front() << '\n';
            d.pop_front();
        }
    }
}