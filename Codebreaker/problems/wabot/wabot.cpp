#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pleasehelp cout << "anyone there?\n";
using namespace std;
signed main() {
    fast;
    set<int> S;
    unordered_map<int, priority_queue<int, vector<int>, greater<int>>> UM;
    int n, t=0; cin >> n;
    for (int i = 0; i < n; i++) {
        int l, c; cin >> l >> c;
        S.insert(l);
        UM[l].push(c);
    }

    for (auto x: S) {
        auto pq = UM[x];
        int c=-1;
        while (!pq.empty()) {
            if (c == -1) {
                c = pq.top();
                pq.pop();
            } else {
                c += pq.top();
                t += c;
                pq.pop();
                S.insert(x+1);
                UM[x+1].push(c);
                c = -1;
            }
        }
    }

    cout << t;
}