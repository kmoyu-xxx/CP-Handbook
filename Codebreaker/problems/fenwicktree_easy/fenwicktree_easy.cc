#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int sum(int k, vector<int>& tree) {
    int s = 0;
    while (k > 0) {
        s += tree[k];
        k -= k&-k;
    }
    return s;
}

void add(int k, int x, vector<int>& tree) {
    while (k < tree.size()) {
        tree[k] += x;
        k += k&(-k);
    }
}

int rangeQuery(int l, int r, vector<int>& tree) {
    return sum(r, tree) - sum(l-1, tree);
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    vector<int> v(n+1), tree(n+1);
    for (int i = 1; i <= n; i++) cin >> v[i];
    for (int i = 1; i <= n; i++) add(i, v[i], tree);
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int t, x, y; cin >> t >> x >> y;
        if (t == 0) {
            cout << rangeQuery(x, y, tree) << endl;
        } else {
            add(x, y-v[x], tree);
            v[x] = y;
        }
    }
}