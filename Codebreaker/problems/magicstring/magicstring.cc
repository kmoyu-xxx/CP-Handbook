#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    map<char, int> m;
    for (int i = 0; i < n; i++) {
        char x; cin >> x; m[x]++;
        int t=0;
        for (char j = 'a'; j < x; j++) t += m[j];
        cout << t << endl;
    }
}