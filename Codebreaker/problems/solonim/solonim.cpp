#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pleasehelp cout << "anyone there?\n";
using namespace std;
signed main() {
    fastio;
    int n, t=0; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x % 2 != 0) t++;
    }
    if (t % 2 == 0) cout << "Yes\n";
    else cout << "No\n";
}