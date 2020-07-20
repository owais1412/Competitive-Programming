// CF https://codeforces.com/contest/1371/problem/B

#include <bits/stdc++.h>

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
    long long int t, n, r, res = 0;
    cin >> t ;
    while (t--) {
        res = 0;
        cin >> n >> r;
        if (n <= 1) {
            cout << "1\n";
            continue;
        }
        if (n <= r) {
            r = n - 1;
            res = 1;
        }
        cout << res + ((1 + r) * (r) / 2) << "\n";
    }
    return 0 ;

}