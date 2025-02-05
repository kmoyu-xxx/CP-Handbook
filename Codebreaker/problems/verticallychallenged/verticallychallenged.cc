#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, k, c=0; cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < k; i++) {
        int x; cin >> x;
        pq.push(x);
    }
    cout << pq.top() << '\n';
    for (int i = k; i < n; i++) {
        int x; cin >> x;
        pq.push(x);
        pq.pop();
        cout << pq.top() << '\n';
    }
}


// 3 7 2 5 11 6 1 9 8 10 4
// 3 3 2 2 2  3 3 5 6 7  7 