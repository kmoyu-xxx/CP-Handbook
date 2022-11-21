#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 1000000007
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    int n, t=0; cin >> n;
    vector<int> V(n), A;
    for (int i = 0; i < n; i++) cin >> V[i];

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (V[j] > V[j+1]) {
                swap(V[j], V[j+1]);
                t++;
                A.push_back(j+1);
            }
        }
    }

    cout << t << endl;

    for (auto x: A) {
        cout << x << endl;
    }
}