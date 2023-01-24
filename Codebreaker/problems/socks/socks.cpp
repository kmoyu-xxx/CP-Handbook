#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
signed main() {
    int n, k; cin >> n >> k;
    bool flag = false;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    int t = 0;
    for (auto x: A) {
        if (x >= k) {
            t += k-1;
            flag = true;
        } else {
            t += x;
        }
    }

    if (k == 0) cout << 0;
    else if (flag) cout << t+1;
    else cout << -1;
}