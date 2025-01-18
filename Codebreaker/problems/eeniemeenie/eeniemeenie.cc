#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, k; cin >> n >> k;
    vector<string> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    cout << v[k%n];
}