// CC https://www.codechef.com/AUG20B/problems/CHEFWARS

#include <bits/stdc++.h>

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL) ;
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		while (m > 0) {
			m = m - n;
			n /= 2;
			if (n > m) {
				cout << "1\n";
				break;
			} else if (n == 0 && m != 0) {
				cout << "0\n";
				break;
			} else if (n == 0 && m == 0) {
				cout << "1\n";
				break;
			}
		}
	}
	return 0 ;

}