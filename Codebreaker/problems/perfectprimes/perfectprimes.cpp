#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
signed main() {
    vector<int> isprime(100005, 1), primes;
    for (int i = 2; i*i < 100005; i++) {
        if (isprime[i] == 1) {
            for (int j =  i*i; j < 100005; j += i) {
                isprime[j] = 0;
            }
        }
    }
    for (int i = 2; i < 100005; i++) {
        string x = to_string(i);
        if (isprime[i]) {
            if (x.find('4') != string::npos || x.find('7') != string::npos)
            primes.push_back(i);
        }
    }

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n, j=0; cin >> n;
        while (j < (int)primes.size() && primes[j] <= n) {
            j++;
        }
        cout << j << endl;
    }
}