#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    priority_queue<int> left;
    priority_queue<int, vector<int>, greater<int>> right;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (s == "PUSH") {
            // for initial
            int x; cin >> x;
            if (left.empty() && right.empty()) left.push(x);
            else if (right.empty()) {
                if (x >= left.top()) right.push(x);
                else {
                    right.push(left.top());
                    left.pop();
                    left.push(x);
                }
            } else if (left.size() == right.size()) {
                if (x <= right.top()) left.push(x);
                else {
                    left.push(right.top());
                    right.pop();
                    right.push(x);
                }
            } else {
                if (x >= left.top()) right.push(x);
                else {
                    right.push(left.top());
                    left.pop();
                    left.push(x);
                }
            }
        } else if (s == "POP") {
            if (left.size() == right.size()) {
                left.pop();
                left.push(right.top());
                right.pop();
            } else {
                left.pop();
            }
        }
    }

    vector<int> v;
    while (!left.empty()) {
        v.push_back(left.top()); left.pop();
    }
    while (!right.empty()) {
        v.push_back(right.top()); right.pop();
    }
    sort(v.begin(), v.end());
    for (auto x: v) cout << x << " ";
}