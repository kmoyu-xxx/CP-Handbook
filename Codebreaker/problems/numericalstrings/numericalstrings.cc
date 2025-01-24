#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, k; cin >> n >> k;
    vector<string> V(n), A(k);
    for (int i = 0; i < n; i++) cin >> V[i];

    sort(V.begin(), V.end(), [](string a, string b){
        if (a.size() != b.size()) return b.size() < a.size();
        else return b < a;
    });

    for (int i = 0; i < k; i++) A[i] = V[i];

    sort(A.begin(), A.end(), [](string a, string b) {
        return a+b > b+a;
    });

    for (auto x: A) cout << x;
}