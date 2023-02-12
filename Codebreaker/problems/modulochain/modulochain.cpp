#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
signed main() {
    int n, mod=1e9+7, t=0, s=0; cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    
    // addition 
    for (auto x: A) {
        t = (t % mod) + (x % mod);
        t %= mod;
    }
    cout << t << " ";

    // multiplication
    cout << ((A[0] % mod) * (A[n-1] % mod) % mod) << " ";

    // subtraction
    for (int i = 1; i < (int)A.size(); i++) s = ((s % mod) + (A[i] % mod)) % mod;
    cout << ((A[0] % mod) - (s % mod) + mod) % mod << " ";
}