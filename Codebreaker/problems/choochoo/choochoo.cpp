#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, t=0; cin >> n;
    for (int i = 0; i < n; i++) {
        string x; cin >> x;
        if (x == "chugga") {
            t++;
        }
    }
    if (t % 2 == 0) cout << "CHOO choo";
    else cout << "choo CHOO";
}