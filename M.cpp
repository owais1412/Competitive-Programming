// CF https://codeforces.com/contest/1371/problem/C

#include <bits/stdc++.h>

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
    long long int t, a, b, n, m;
    cin >> t ;
    while (t--) {
        cin >> a >> b >> n >> m;
        if (a > b) swap(a, b);
        if (a < m) {
            cout << "No\n";
            continue;
        }
        if ((a + b) < (n + m)) {
            cout << "No\n";
            continue;
        }
        cout << "Yes\n";
    }
    return 0 ;

}