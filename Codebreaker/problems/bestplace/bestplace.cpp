#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pleasehelp cout << "anyone there?\n";
using namespace std;
signed main() {
    fast;
    int n; cin >> n;
    vector<int> xs(n), ys(n);
    for (int i = 0; i < n; i++) {
        cin >> xs[i] >> ys[i];
    }
    
    sort(xs.begin(), xs.end());
    sort(ys.begin(), ys.end());

    cout << xs[n/2] << " " << ys[n/2];
}