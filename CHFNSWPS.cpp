// CC https://www.codechef.com/JULY20B/problems/PTMSSNG

#include <iostream>
#include <map>
#include <vector>

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
		long long int n, m; cin >> n;
		m = 2 * n;
		map<int, int> a, b, c;
		while (m--) {
			long long int x; cin >> x;
			if (c.find(x) == c.end()) {
				c[x] = 1;
			} else {
				c[x]++;
			}
			if (m > n / 2) {
				if (a.find(x) == a.end()) {
					a[x] = 1;
				} else {
					a[x]++;
				}
			} else {
				if (b.find(x) == b.end()) {
					b[x] = 1;
				} else {
					b[x]++;
				}
			}
		}
		for (auto it = c.begin(), it2 = a.begin(); it != c.end(); it++, it2++) {
			c[it2->first]--;
		}
		// cout << "\n";
		for (auto it = c.begin(); it != c.end(); it++) {
			cout << it->first  << "=" << it->second << " ";
		}
		cout << "\n";
		// for (auto it = b.begin(); it != b.end(); it++) {
		// 	cout << it->first  << "=" << it->second << " ";
		// }
		// cout << "\n";
	}
	return 0 ;

}