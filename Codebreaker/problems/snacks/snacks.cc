// NOI 2025 Qualifications Q3
#include <bits/stdc++.h>
#define int long long 
#define endl "\n"
using namespace std;
signed main() {
    int n, q, sum=0; cin >> n >> q;
    set<int> snacks;
    map<int, int> amount;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        sum += x; snacks.insert(x); amount[x]++;
    }

    cout << sum << endl;

    for (int i = 0; i < q; i++) {
        int l, r, x; cin >> l >> r >> x;
        vector<int> eaten;
        for (auto it = snacks.lower_bound(l); it != snacks.end(); it++) {
            int d = *it; if (d > r) break;

            sum -= d * amount[d];
            sum += x * amount[d];

            if (d != x) {
                amount[x] += amount[d];
                amount[d] = 0;
            }

            eaten.push_back(d);
        }

        for (auto c: eaten) snacks.erase(c);
        if (eaten.size() != 0) snacks.insert(x);
        cout << sum << endl;

    }
}

// removed deliciousness, x, added deliciousness, sum