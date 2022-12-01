#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
	ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    map<string, int> m;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string x; cin >> x;
        m[x]++;
    }
    if (m["chugga"] % 2 == 0) {
        cout << "CHOO choo";
    } else {
        cout << "choo CHOO";
    }
}