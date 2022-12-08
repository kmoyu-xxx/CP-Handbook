// solving rmaxq
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
struct node {
    int s, e, m, val, lazy;
    node *l, *r;

    node (int S, int E) {
        s = S, e = E, m = (s + e) / 2;
        val = 0;
        lazy = 0;

        if (s != e) {
            l = new node(s, m);
            r = new node(m+1, e);
        }
    }

    void propagate() {
        if (lazy == 0) return;
        val += lazy;
        if (s != e) {
            l -> lazy += lazy;
            r -> lazy += lazy;
        }
        lazy = 0;
    }

    void update(int S, int E, int V) {
        if (s == S && e == E) {
            lazy += V; return;
        } else {
            if (S > m) r -> update(S, E, V);
            else if (E < m+1) l -> update(S, E, V);
            else {
                l -> update(S, m, V);
                r -> update(m+1, E, V);
            }
            l -> propagate(); r -> propagate();
            val = max(l -> val, r -> val);
        }
    }

    int query(int S, int E) {
        propagate();
        if (s == S && e == E) return val;
        else if (S > m) return r -> query(S, E);
        else if (E <= m) return l -> query(S, E);
        else return max(l -> query(S, m), r -> query(m+1, E));
    }
} * root;

signed main() {
    fast;
    int n; cin >> n;
    root = new node(0, n);
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        root -> update(i, i, x);
    }
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int t, l, r; cin >> t >> l >> r;
        if (t == 1) {
            int x; cin >> x;
            root -> update(l, r, x);
        } else {
            cout << root -> query(l, r) << endl;
        }
    }
}