#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
signed main() {
    int n; cin >> n;
    int five=0, six=0, seven=0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x == 5) five++;
        else if (x == 6) six++;
        else if (x == 7) seven++;
    }
    if (seven >= six && seven >= five) cout << 7;
    else if (six >= five && six >= seven) cout << 6;
    else if (five >= six && five >= seven) cout << 5;
}