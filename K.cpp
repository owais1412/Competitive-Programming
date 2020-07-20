// CF https://codeforces.com/contest/1371/problem/0

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
        long long int n;
        cin >> n;
        if (n % 2 == 0) {
            cout << n / 2 << "\n";
        } else {
            cout << (n + 1) / 2 << "\n";
        }
    }
    return 0 ;

}