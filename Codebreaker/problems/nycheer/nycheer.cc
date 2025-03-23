#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#pragma GCC optimize("O3,inline")
using namespace std;
string nyscii(int x) {
    if (x == 1) return "Hey";
    else if (x == 2) return "Ho";
    else return "Nanyang";
}

signed main() {
    int a, b; cin >> a >> b;
    cout << nyscii(a) << " " << nyscii(b);
}