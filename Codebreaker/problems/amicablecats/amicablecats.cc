#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
signed main() {
    int n; cin >> n;
    unordered_set<int> divisors;

    int amic=0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) amic += i + n/i;
    }

    amic -= n;
    if (amic == n) {
        cout << -1; return 0;
    }

    int sum = 0;
    for (int i = 1; i <= sqrt(amic); i++) {
        if (amic % i == 0) sum += i + amic/i;
    }

    sum -= amic;

    if (n == sum) cout << amic << endl;
    else cout << -1 << endl;
}