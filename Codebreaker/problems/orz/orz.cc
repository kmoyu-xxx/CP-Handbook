#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
string orz(int x) {
    if (x == 1) return "TheRaptor";
    else if (x == 2) return "penguin133";
    else return "ryangohca";
}

signed main() {
    int n; cin >> n;
    cout << orz(n) << " orz";
}