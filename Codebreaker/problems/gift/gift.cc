#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, k, t=0, prev; cin >> n >> k >> prev;
    for (int i = 0; i < n-1; i++) {
        int x; cin >> x;
        if (prev - x >= k) t++;
        prev = x;
    }
    cout << t;
}