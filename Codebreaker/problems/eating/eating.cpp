#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 1000000007
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    fastio;
    unordered_map<string, int> M;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string p, b; cin >> p >> b;
        string x = p + "." + b;
        if (M[x] == 0) {
            cout << "YES\n";
            M[x] = 1;
        } else {
            cout << "NO\n";
        }
    }
}