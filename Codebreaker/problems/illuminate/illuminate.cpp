// on solving illuminate
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pleasehelp cout << "anyone there?\n";
using namespace std;
signed main() {
    fast;
    vector<vector<char>> grid;
    int r, c, t=0; cin >> r >> c;
    int section=0, empty=0;
    for (int i = 0; i < r; i++) {
        string s; cin >> s;
        vector<char> row;
        for (auto x: s) {
            if (x == '.') empty++;
            row.push_back(x);
        }
        grid.push_back(row);
    }
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (grid[i][j] == '.') {
                section++;
            } else {
                t += section*section;
                section = 0;
            }
        }
        t += section*section;
        section = 0;
    }

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            if (grid[j][i] == '.') {
                section++;
            } else {
                t += section*section;
                section = 0;
            }
        }
        t += section*section;
        section = 0;
    }

    cout << t - empty;
}