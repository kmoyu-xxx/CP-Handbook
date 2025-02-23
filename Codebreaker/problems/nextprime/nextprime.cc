#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int n = 2e5+1000;
vector<bool> prime(n+1, true);
void sieve(int x) {
    for (int p = 2; p*p <= x; p++) {
        if (prime[p]) 
            for (int i = p*p; i <= x; i += p) prime[i] = false;
    }
}

signed main() {
    sieve(n);
    int x; cin >> x;
    for (int i = x; i < n; i++) {
        if (prime[i]) {
            cout << i; break;
        }
    }
}