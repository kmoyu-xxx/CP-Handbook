#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, c; cin >> n >> c;
    set<int> s;
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        int x; cin >> x; s.insert(x);
        m[x] = i+1;
    }

    for (int i = 0; i < c; i++) {
        int x; cin >> x;
        auto it = s.lower_bound(x);
        
        if (it == s.begin()) {
            cout << m[*it] << endl;
            s.erase(*it);
        } else if (it == s.end()) {
            it--;
            cout << m[*it] << endl;
            s.erase(*it);
        } else {
            int hi = *it;
            it--; int lo = *it;
            if (abs(hi - x) >= abs(lo - x)) {
                cout << m[lo] << endl;
                s.erase(lo);
            } else {
                cout << m[hi] << endl;
                s.erase(hi);
            }
        }
    }
}