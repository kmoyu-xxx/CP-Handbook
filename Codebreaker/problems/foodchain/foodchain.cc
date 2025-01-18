#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int m = 1e9 + 9;

    int t = ((d%m)*(e%m))%m;
    t = ((t%m)*(c%m))%m;
    t = ((t%m)*(b%m))%m;
    t = ((t%m)*(a%m))%m;

    cout << t;
}