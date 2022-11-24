#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    int n, h, ans=0; cin >> n >> h;
    vector<int> P(n-1);
    for (int i = 0; i < n-1; i++) cin >> P[i];

    for (int i = 0; i < n-1; i++) {
        if (P[i] >= (i+1)*(h/n)) ans++;
    }

    if (ans) cout << "No\n" << ans << endl;
    else cout << "Yes\n";
}