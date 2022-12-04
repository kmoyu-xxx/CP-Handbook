#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pleasehelp cout << "anyone there?\n";
using namespace std;
vector<int> fenwick(1000005);
int n, q, k, t, d, s, m;
 
int query(int x){
    int ans = 0;
    while (x){
        ans += fenwick[x];
        ans %= m;
        x -= x & -x;
    }
    return ans;
}
 
void add(int x, int val){
    while (x <= n){
        fenwick[x] += val;
        fenwick[x] %= m;
        x += x & -x;
    }
}
 
signed main(){
    fast;
    cin >> n >> q >> k;
    m = (int)1<<k;

    for (int i = 0; i < q; i++){
        cin >> t;
        if (t == 0){
            cin >> d >> s;
            add(d, s);
        }
        else{
            cin >> d;
            cout << query(d) << endl;
        }
    }
}
 