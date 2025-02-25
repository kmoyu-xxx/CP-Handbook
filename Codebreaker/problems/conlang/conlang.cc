#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
signed main() {
    int n, ans=0; cin >> n;
    string s; cin >> s;
    for (int i = 0; i < n; i++) {
        string x; cin >> x;
        bool yay = true;
        if (x.size() != s.size()) continue;
        for (int j = 0; j < x.size(); j++) {
            if (x[j] == 'a' || x[j] == 'e' || x[j] == 'i' || x[j] == 'o' || x[j] == 'u' || x[j] == 'y') {
                if (s[j] != 'V') yay = false;
            } else {
                if (s[j] != 'C') yay = false;
            }
        }
        if (yay) ans++;
    }
    cout << ans;
}