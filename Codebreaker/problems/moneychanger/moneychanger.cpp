#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, val;
    vector<int> coins, mincoins(10001, INT_MAX);

    cin >> n >> val;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        coins.push_back(x);
    }

    mincoins[0] = 0;
    for (int v = 1; v <= val; v++) {
        for (int i = 0; i < n; i++) {
            if (v >= coins[i] && mincoins[v - coins[i]] != INT_MAX) {
                mincoins[v] = min(mincoins[v], 1 + mincoins[v - coins[i]]);
            }
        }
    }

    if (mincoins[val] == INT_MAX) {
        cout << -1;
    } else {
        cout << mincoins[val];
    }
}