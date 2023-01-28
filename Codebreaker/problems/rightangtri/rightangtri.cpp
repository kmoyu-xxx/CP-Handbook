#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
signed main() {
    fast;
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}