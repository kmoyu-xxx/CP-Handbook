#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 1000000007
#define owo ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    owo;
    int n, m; cin >> n >> m;
    vector<int> T, A;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        T.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        A.push_back(x);
    }
    for (int i = 0; i < m; i++) {
        int a; cin >> a;
        int pos = upper_bound(T.begin(), T.end(), a) - T.begin() - 1;
        cout << A[pos] << endl;
    }
}