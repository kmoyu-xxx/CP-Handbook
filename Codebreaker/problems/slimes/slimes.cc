#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
signed main() {
    int n, ans=1; cin >> n;
    string s; cin >> s;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i-1]) ans++;
    }
    cout << ans;
}