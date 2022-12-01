#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pleasehelp cout << "anyone there?\n";
using namespace std;
signed main() {
    fastio;
    int n, c; cin >> n >> c;
    vector<int> ballots(n);
    map<int, int> labels;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        ballots[i] = x;
        labels[x] = i+1;
    }

    sort(ballots.begin(), ballots.end());

    for (int i = 0; i < c; i++) {
        int chosen; cin >> chosen;
        auto hit = lower_bound(ballots.begin(), ballots.end(), chosen);
        auto lit = prev(hit);
        int upper_index = hit - ballots.begin();
        int lower_index = lit - ballots.begin();
        
        if (lower_index >= 0 && upper_index < (long long)ballots.size()) {
            int up = abs(ballots[upper_index] - chosen);
            int lo = abs(ballots[lower_index] - chosen);
            if (up < lo) {
                cout << labels[ballots[upper_index]] << endl;
                ballots.erase(hit);
            } else {
                cout << labels[ballots[lower_index]] << endl;
                ballots.erase(lit);
            }
        } else if (upper_index < (long long)ballots.size()) {
            cout << labels[ballots[upper_index]] << endl;
            ballots.erase(hit);
        } else if (lower_index >= 0) {
            cout << labels[ballots[lower_index]] << endl;
            ballots.erase(lit);
        } else {
            cout << "i messed up. here's a tle";
            while (true) {
                n = 1;
            }
        }
    }
}
