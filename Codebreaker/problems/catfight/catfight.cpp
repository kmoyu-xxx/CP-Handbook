#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pleasehelp cout << "anyone there?\n";
using namespace std;
signed main() {
    fast;
    int n, p; cin >> n >> p;
    vector<int> cats(n);
    for (int i = 0; i < n; i++) cin >> cats[i];

    int sum=0, best=0, r=0, l=0;
    for (int i = 0; i < n; i++) {
        sum += cats[r];
        while (sum >= p) {
            sum -= cats[l];
            l++;
        }
        best = max(best, r-l+1);
        r++;
    }

    cout << best;
}

