#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
bool check(int mid, int m, vector<int> V) {
    int s=1, g=0;
    for (int i = 0; i < (int)V.size(); i++) {
        if (V[i] > mid) return false;
        else if (g + V[i] > mid) { 
            s++; i--; g=0;
        }
        else g += V[i];
    }
    return s <= m ? true : false;
}

signed main() {
    fast;
    int n, m; cin >> n >> m;
    vector<int> V(n);
    for (int i = 0; i < n; i++) cin >> V[i];

    int lo=0, hi=1000000000;
    while (hi > lo + 1) {
        int mid = lo + (hi - lo) / 2;
        if (check(mid, m, V)) hi = mid;
        else lo = mid;
    }
    cout << hi;
}