#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    queue<int> one, two;
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        if (x == 1) {
            int a, b; cin >> a >> b;
            if (a == 1) one.push(b);
            else two.push(b);
        } else {
            if (!two.size() && !one.size()) {
                cout << -1 << endl;
            } else if (!two.size()) {
                cout << one.front() << endl;
                one.pop();
            } else {
                cout << two.front() << endl;
                two.pop();
            }
        }
    }
}