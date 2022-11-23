#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
void solve() {
    int n, t=0; cin >> n;
    deque<int> A;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        A.push_back(x);
    }
    while (A.size() > 1) {
        if (A[0] > A[A.size()-1]) {
            int x = A.front() - A.back();
            A.pop_front();
            A.push_front(x);
            A.pop_back();
            t++;
        } else if (A[A.size()-1] > A[0]) {
            int x = A.back() - A.front();
            A.pop_back();
            A.push_back(x);
            A.pop_front();
            t++;
        } else {
            A.pop_back();
            A.pop_front();
        }
    }

    cout << t << endl;
}

signed main() {
    fastio;
    int tc; cin >> tc;
    while (tc--) solve();
}