#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pleasehelp cout << "anyone there?\n";
using namespace std;
signed main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    vector<int> A(a), B(b), C(c), D(d);
    for (int i = 0; i < a; i++) cin >> A[i];
    for (int i = 0; i < b; i++) cin >> B[i];
    for (int i = 0; i < c; i++) cin >> C[i];
    for (int i = 0; i < d; i++) cin >> D[i];

    map<int, pair<int, int>> AB, CD;

    for (auto x: A) {
        for (auto y: B) {
            AB[x+y] = make_pair(x, y);
        }
    }

    for (auto x: C) {
        for (auto y: D) {
            CD[x+y] = make_pair(x, y);
        }
    }

    for (auto x: AB) {
        if (CD.find(-x.first) != CD.end()) {
            cout << x.second.first << " " << x.second.second << " " << CD[-x.first].first << " " << CD[-x.first].second;
        }
    }
}