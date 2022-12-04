// solving optmilk
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pleasehelp cout << "anyone there?\n";
using namespace std;
vector<int> M(1000005);

struct node {
    int lo, hi, mid;
    int full, lft, rht, none;
    node *l, *r;

    node(int lo, int hi) : lo(lo), hi(hi), mid((lo + hi) >> 1) {
        if (lo == hi) {
            full = M[lo];
            lft = rht = none = 0;
        } else {
            l = new node(lo, mid), r = new node(mid+1, hi);
            combine();
        }
    }

    void combine() {
        none = max(l -> rht + r -> none, l -> none + r -> lft);
        lft = max(l -> lft + r -> lft, l -> full + r -> none);
        rht = max(r -> rht + l -> rht, r -> full + l -> none);
        full = max(l -> lft + r -> full, r -> rht + l -> full);
    }

    void update(int i, int v) {
        if (lo == hi) {
            full = v;
            return;
        }
        if (i <= mid) l -> update(i, v);
        else r -> update(i, v);
        combine();
    }

    int query() {
        return full;
    }
} *root;

signed main() {
    int n, d, ans=0; cin >> n >> d;
    for (int i = 1; i <= n; i++) cin >> M[i];
    root = new node(1, n);

    for (int i = 0; i < d; i++) {
        int x, m; cin >> x >> m;
        root -> update(x, m);
        ans += root -> query();
    }

    cout << ans;
}