#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pleasehelp cout << "anyone there?\n";
using namespace std;
struct node {
    // range: [s,e], m is middle point
    int s, e, m; 
    int best, prefix, suffix, t;

    // create children l & r, l: [s, m], r: [m+1, e]
    node *l, *r; 

    // constructor
    node (int S, int E) {
        s = S, e = E, m = (s + e) / 2;
        best = 0, prefix = 0, suffix = 0, t = 0;

        // node not yet leaf, create children
        if (s != e) {
            l = new node(s, m); // left child
            r = new node(m+1, e); // right child
        }
    } 

    // update segtree
    void update(int X, int V) {
        if (s == X && X == e) { // node is leaf, update variables
            t = V;
            best=max(V,(int)0);
            prefix=max(V,(int)0);
            suffix=max(V,(int)0);
        } else { // go down to find leaf
            if (X <= m) { // X is in left cild
                l -> update(X, V);
            } else { // X is in right child
                r -> update(X, V);
            }

            // update max
            prefix = max(l -> prefix, l -> t + r -> prefix);
            suffix = max(r -> suffix, r -> t + l -> suffix);
            t = l -> t + r -> t;
            best = max(prefix, suffix);
            best = max(best, l -> best);
            best = max(best, r -> best);
            best = max(best, l -> suffix + r -> prefix);
        }
    }

    int query() {
        return best;
    }
} *root;

signed main() {
    fast;
    int n; cin >> n;

    // [1,n] is entire range
    // root is a node which covers all elements
    root = new node(0, n-1); 

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        root -> update(i, x);
    }

    cout << root -> query() << endl;

    int m; cin >> m;

    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        root -> update(x, y);
        cout << root -> query() << endl;
    }
}
