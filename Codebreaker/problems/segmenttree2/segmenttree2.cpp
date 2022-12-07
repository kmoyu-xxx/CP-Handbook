#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
struct node {
    int s, e, m, val, lazy;
    node *l = nullptr, *r = nullptr;

    node (int S, int E) {
        s = S, e = E, m = (s + e) / 2;
        val = 0;
        lazy = 0;
    }

    void create() {
        if (s != e) {
            l = new node(s, m);
            r = new node(m+1, e);
        }
    }

    void propagate() {
        if (lazy == 0) return;
        val += lazy * (e - s + 1);
        if (s != e) {
            if (l == nullptr) create();
            l -> lazy += lazy;
            r -> lazy += lazy;
        }
        lazy = 0;
    }

    void update(int S, int E, int V) {
        if (l == nullptr) create();
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
            val = l -> val + r -> val;
        }
    }

    int query(int S, int E) {
        if (l == nullptr) create();
        propagate();
        if (s == S && e == E) return val;
        else if (S > m) return r -> query(S, E);
        else if (E <= m) return l -> query(S, E);
        else return l -> query(S, m) + r -> query(m+1, E);
    }
} * root;

signed main() {
    fast;
    int n, q; cin >> n >> q;
    root = new node(1, n+1);
    while (q--) {
        int que, l, r; cin >> que >> l >> r;
        if (que == 1) {
            int v; cin >> v;
            root -> update(l, r, v);
        } else if (que == 2) {
            cout << root -> query(l, r) << endl;
        }
    }
}