#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
void solve() {
    string s; cin >> s;
    int zo=0, oz=0, t=0, n = s.size();
    
    for (int i = 1; i < n; i++) {
        if (s[i-1] == '0' && s[i] == '1') zo++;
        else if (s[i-1] == '1' && s[i] == '0') oz++;
    }
    
    if (zo == oz) {
        t = max((long long)0, n - 2);
    } else if (abs(zo - oz) > 2) {
        t = 0;
    } else {
        if (oz - zo == 1) {
            if (s[0] == '1' && s[1] == '1') t++;
            if (s[0] == '1' && s[1] == '0') t++;
            if (s[n-2] == '0' && s[n-1] == '0') t++;
            if (s[n-2] == '1' && s[n-1] == '0') t++;
        } else if (zo - oz == 1) {
            if (s[0] == '0' && s[1] == '0') t++;
            if (s[0] == '0' && s[1] == '1') t++;
            if (s[n-2] == '1' && s[n-1] == '1') t++;
            if (s[n-2] == '0' && s[n-1] == '1') t++;
        }
    }
    
    cout << t << endl;
}

signed main() {
    fastio;
    int tc; cin >> tc;
    while (tc--) solve();
}