#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 1000000007
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

string digitName(int digit);
string teenName(int number);
string tensName(int number);
string intName(int number);

vector<string> ones {"","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
vector<string> teens {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen","sixteen", "seventeen", "eighteen", "nineteen"};
vector<string> tens {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string nameForNumber (int number) {
    if (number < 10) {
        return ones[number];
    } else if (number < 20) {
        return teens [number - 10];
    } else if (number < 100) {
        return tens[number / 10] + ((number % 10 != 0) ? " " + nameForNumber(number % 10) : "");
    } else if (number < 1000) {
        return nameForNumber(number / 100) + " hundred" + ((number % 100 != 0) ? " " + nameForNumber(number % 100) : "");
    } else if (number < 1000000) {
        return nameForNumber(number / 1000) + " thousand" + ((number % 1000 != 0) ? " " + nameForNumber(number % 1000) : "");
    } else if (number < 1000000000) {
        return nameForNumber(number / 1000000) + " million" + ((number % 1000000 != 0) ? " " + nameForNumber(number % 1000000) : "");
    } else if (number < 1000000000000) {
        return nameForNumber(number / 1000000000) + " billion" + ((number % 1000000000 != 0) ? " " + nameForNumber(number % 1000000000) : "");
    }
    return "error";
}

signed main() {
    fastio;
    int n, t, inf = 1299710; cin >> n >> t;
    vector<int> isprime, primes;

    for (int i = 0; i < inf; i++) {
        isprime.push_back(1);
    }
 
    for (int i = 2; i*i < inf; i++) {
        if (isprime[i] == 1) {
            for (int j =  i*i; j < inf; j += i) {
                isprime[j] = 0;
            }
        }
    }

    for (int i = 2; i < inf; i++)
        if (isprime[i])
            primes.push_back(i);

    string s = nameForNumber(primes[n-1]);
    s[0] = toupper(s[0]);

    cin.ignore();
    
    for (int i = 0; i < t; i++) {
        string x; getline(cin, x);
        if (x == s) cout << "Correct!" << endl;
        else cout << "Wrong!" << endl;
    }
}