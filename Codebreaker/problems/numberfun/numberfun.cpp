#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
signed main() {
    vector<int> dp(30000005, -1);
    dp[0] = 0; dp[1] = 1;

    for (int i = 0; i < 30000005; i++) {
        if (dp[i] != -1) continue;

        int x=-1, y=-1, z=i-1, c=999999;

        if (i % 2 == 0) x = i/2;
        if (i % 3 == 0) y = i/3;

        if (x != -1) c = min(c, dp[x]);
        if (y != -1) c = min(c, dp[y]);
        c = min(c, dp[z]);

        dp[i] = c + 1;
    }

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        cout << dp[a] << endl;
    }
}