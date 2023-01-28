#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
int mod = 998244353;

signed main() {
    fast;
    int n; cin >> n;
    vector<int> fibo(200005);
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 0; i < n+1; i++) {
        if (i < 2) cout << fibo[i] << endl;
        else {
            int c = fibo[i-1] % mod + fibo[i-2] % mod;
            fibo[i] = c % mod;
            cout << fibo[i] << endl;
        }
    }
}