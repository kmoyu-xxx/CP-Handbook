#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, q; cin >> n >> q;
    map<string, string> m1, m2;
    for (int i = 0; i < n; i++) {
        string name, nick; cin >> name >> nick;
        m1[name] = nick; m2[nick] = name;
    }
    for (int i = 0; i < q; i++) {
        int j; string s; cin >> j >> s;
        if (j == 1) cout << m1[s] << '\n';
        else cout << m2[s] << '\n';
    }
}