#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
signed main() {
    vector<int> A;
    string s; cin >> s;
    int t = 0;

    for (auto x: s) {
        if (x == 'u') {
            if (t != 0) {
                A.push_back(t);
                t = 0;
            }
        } else {
            t++;
        }
    }

    if (t != 0) A.push_back(t);
    t = 0;
    for (auto x: A) t += x*(x+1)/2;
    cout << t;
}