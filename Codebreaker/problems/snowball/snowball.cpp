#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
signed main() {
    fast;
    int n, d, best=0, t=0; cin >> n >> d;
    bool flag = true;
    vector<int> S;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        best = max(best, x);
        S.push_back(x);
    }

    t += (best + d) * (best + d);

    for (auto x: S) {
        if (flag && x == best) {
            flag = false;
            continue;
        }
        t += x * x;
    }

    cout << t;
}