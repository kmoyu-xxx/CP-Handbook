#include <bits/stdc++.h>
#define int long long
using namespace std;
bool canCut(vector<pair<int, int>> trees, int h) {
    vector<int> days;

    for (auto x: trees) {
        // no. of days before tree height exceeds h
        int d = (h - x.first) / x.second; 
        days.push_back(d);
    }

    sort(days.begin(), days.end());

    for (int i=0; i < days.size(); i++) {
        if (days[i] < i) return false; // i cannot cut the tree in time
    }

    return true; // i can cut the tree in time
}

signed main() {
    int n, lo=0, hi=0; cin >> n;
    vector<pair<int, int>> trees;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        lo = max(lo, a);
        hi = max(hi, n*b+a);
        trees.push_back(make_pair(a, b));
    }

    int ans;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        // mid is my guess. can i cut all trees?
        // if yes, H is either correct or too tall
        // if not, H is too short
        if (canCut(trees, mid)) { 
            ans = mid; // mid MIGHT be the answer then
            hi = mid-1;
        } else {
            lo = mid+1;
        }
    }

    cout << ans;
}


