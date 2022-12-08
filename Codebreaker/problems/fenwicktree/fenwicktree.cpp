// solving fenwicktree
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
vector<int> fenwick_one(1000005), fenwick_two(100005);
int N = 100000;

void update(int x, int y, int v) {
    for (int i = x; i <= N; i += i & -i) {
        fenwick_one[i] += v;
        fenwick_two[i] -= v * (x-1);
    }
    for (int i = y+1; i <= N; i += i & -i) {
        fenwick_one[i] -= v;
        fenwick_two[i] += v*y;
    }
}
 
int sum(int x) {
    int t = 0;
    for (int i = x; i > 0; i -= i & -i) {
        t += fenwick_one[i] * x + fenwick_two[i];
    }
    return t;
}

int range_sum(int x, int y) {
    return sum(y) - sum(x-1);
}

signed main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        update(i, i, x);
    }
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int t; cin >> t;
        if (t == 0) {
            int a, b; cin >> a >> b;
            cout << range_sum(a+1, b+1) << endl;
        } else {
            int a, b, c; cin >> a >> b >> c;
            update(a+1, b+1, c);
        }
    }
}