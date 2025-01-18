#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int h, w; cin >> h >> w;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            string x; cin >> x;
            if (x == "pavement") {
                cout << i << " " << j; return 0;
            }
        }
    }
}