#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pleasehelp cout << "anyone there?\n";
using namespace std;
vector<int> fenwick(1000005), amount(1000005);
int n;
 
int query(int x){
    int ans = 0;
    while (x){
        ans += fenwick[x];
        x -= x & -x;
    }
    return ans;
}
 
void add(int x, int val){
    while (x <= n){
        fenwick[x] += val;
        x += x & -x;
    }
}

signed main(){
    fast;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int q, t; cin >> q >> t;
        if (t <= 1000000) {
            if (q == 1) { 
                if (amount[t] == 0) add(t, 1);
                amount[t]++;
            } else { // eating t
                if (amount[t] == 1) add(t, -1);
                if (amount[t] != 0) amount[t]--;
            }
        }

        int lo=1, hi=n, ans=0;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (query(mid) == mid) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        
        cout << ans << endl;
    }
}
 