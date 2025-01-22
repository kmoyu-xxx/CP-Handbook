#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    deque<pair<int, int>> d;
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        if (x == 1) {
            int a, b; cin >> a >> b;
            d.push_back(make_pair(a, b));
        } else {
            int n, count = 0, sum = 0; cin >> n;
            while (count < n) {
                auto p = d.front();
                d.pop_front();
                if (n - count >= p.second) {
                    sum += p.first * p.second;
                    count += p.second;
                } else {
                    sum += p.first * (n - count);
                    d.push_front(make_pair(p.first, p.second-(n-count)));
                    break;
                }
            }
            cout << sum << endl;
        }
    }
}