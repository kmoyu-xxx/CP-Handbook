#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
int multiply_it_twice(int n) {
    return n * n;
}

int cutting_edge(int n, int k) {
    int a = k/n; int b = k-a*n;
    return (n - b) * multiply_it_twice(a) + b * multiply_it_twice(a + 1);
}

signed main() {
    fast;
    int n, k, t=0; cin >> n >> k;
    priority_queue<pair<int, pair<int, int>>> pq;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        t += x * x;
        pq.push(make_pair(cutting_edge(1,x)-cutting_edge(2,x), make_pair(x,2)));
    }
    for (int i = 0; i < k-n; i++) {
        t -= pq.top().first;
        int x = pq.top().second.first, y = pq.top().second.second;
        pq.pop();
        pq.push(make_pair(cutting_edge(y,x)-cutting_edge(y+1,x), make_pair(x,y+1)));
    }
    cout << t << endl;
}