#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n; cin >> n;
    bool pos=false, neg=false, sorted=true;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (v.size() > 0 && v[v.size()-1] < x) sorted=false;
        if (x > 0) pos = true;
        else if (x < 0) neg = true;
        v.push_back(x);
    }

    if (sorted || (pos && neg)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}