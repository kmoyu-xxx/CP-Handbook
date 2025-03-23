#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
signed main() {
    int x, y, e; cin >> x >> y >> e;
    cout << max(y, x-2*e);
}