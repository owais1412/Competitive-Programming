// CF https://codeforces.com/contest/71/problem/A

#include <bits/stdc++.h>
// #define pb push_back
// #define mp make_pair
// #define fr first
// #define sc second
// #define MOD 1000000007
// #define len(x) x.size()
// #define min3(a, b, c) min(a, min(b, c))
// #define max3(a, b, c) max(a, max(b, c))
// #define all(v) v.begin(), v.end()
// #define alla(a,n) a, a + n

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        if (n <= 10) cout << s << "\n";
        else cout << s[0] << s.length() - 2 << s[n - 1] << "\n";
    }
    return 0 ;

}