#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ping cout << "pong\n";
using namespace std;
vector<int> farm(100005);
struct node {
    int s, e, m; 
    vector<int> val; 

    // create children l & r, l: [s, m], r: [m+1, e]
    node *l, *r; 

    // constructor
    node (int S, int E) {
        s = S, e = E, m = (s + e) / 2;

        // node not yet leaf, create children
        if (s != e) {
            l = new node(s, m); // left child
            r = new node(m+1, e); // right child
            vector<int> v1 = l -> val;
            vector<int> v2 = r -> val;
            merge(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(val));
        } else {
            val.push_back(farm[s]);
        }
    } 

    int posit(int S, int E, int V) {
        if (s == S && e == E) {
            return val.size() - (lower_bound(val.begin(), val.end(), V) - val.begin());
        } else if (S > m) {
            return r -> posit(S, E, V);
        } else if (m+1 > E) {
            return l -> posit(S, E, V);
        } else {
            return l -> posit(S, m, V) + r -> posit(m+1, E, V);
        }
    }

    int query(int S, int E, int V) {
        int lo=0, hi=1e18;
        while (lo+1 < hi) {
            int mid = lo + (hi - lo) / 2;
            if (posit(S, E, mid) >= V) lo = mid;
            else hi = mid;
        }
        return lo;
    }
} *root;

signed main() {
    fast;
    int n, p; cin >> n >> p;
    for (int i = 1; i <= n; i++) cin >> farm[i];
    root = new node(1, n);
    for (int i = 0; i < p; i++) {
        int l, r, v; cin >> l >> r >> v;
        cout << root -> query(l, r, v) << endl;
    }
}
