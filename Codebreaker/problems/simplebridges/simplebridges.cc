#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, k, s, e; cin >> n >> k >> s >> e;
    if (abs(e-s) % k == 0) cout << "Yes";
    else cout << "No";
}