#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
signed main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        if (abs(420-n) > abs(69-n)) cout << 69;
        else cout << 420;
        cout << endl;
    }
}