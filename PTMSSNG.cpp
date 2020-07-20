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
		long long int n, m; cin >> m;
		n = 4 * m - 1;
		map<long long int, int> row, col;
		for (long long int i = 0; i < n; i++) {
			long long int x, y; cin >> x >> y;
			if (row.find(x) == row.end()) {
				row[x] = 1;
			} else {
				row[x]++;
			}
			if (col.find(y) == col.end()) {
				col[y] = 1;
			} else {
				col[y]++;
			}
		}
		long long int ansX, ansY;
		for (pair<long long int, int> x : row) {
			if (x.second % 2 == 1) {
				ansX = x.first;
				break;
			}
		}
		for (pair<long long int, int> y : col) {
			if (y.second % 2 == 1) {
				ansY = y.first;
				break;
			}
		}
		cout << ansX << " " << ansY << "\n";
	}
	return 0 ;

}