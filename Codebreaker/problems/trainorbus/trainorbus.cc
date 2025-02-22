// NOI 2025 Qualifications Q1
#include <bits/stdc++.h>
#define int long long 
#define endl "\n"
using namespace std;
signed main() {
    int n, ans=0; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) {
        ans += min(a[i], b[i]);
    }
    cout << ans;
}