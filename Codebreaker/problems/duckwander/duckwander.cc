#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
signed main() {
    int n, x=0, y=0; cin >> n;
    for (int i = 0; i < n; i++) {
        string s; int w; cin >> s >> w;
        if (s == "UP") y += w;
        else if (s == "DOWN") y -= w;
        else if (s == "RIGHT") x += w;
        else x -= w;
    }
    cout << x << " " << y;
}