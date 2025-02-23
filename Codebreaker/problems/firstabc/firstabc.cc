#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
signed main() {
    int n; cin >> n;
    string s; cin >> s;

    bool a=false, b=false, c=false;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') a = true;
        else if (s[i] == 'B') b = true;
        else if (s[i] == 'C') c = true;
        if (a && b && c) {
            cout << i+1; break;
        }
    }
}