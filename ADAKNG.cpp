// CC https://www.codechef.com/JULY20B/problems/ADAKING

#include <bits/stdc++.h>

using namespace std;
int sumOfDigits(long long int x) {
	int res = 0;
	while (x != 0) {
		res = res + (x % 10);
		x /= 10;
	}
	return res;
}
int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL) ;
	int t; cin >> t;
	long long int x, y;
	while (t--) {
		int k; cin >> k;
		char res[8][8];
		res[0][0] = 'O'; k--;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if (i == 0 && j == 0) continue;
				if (k) {
					res[i][j] = '.'; k--;
				} else {
					res[i][j] = 'X';
				}
			}
		}
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cout << res[i][j];
			}
			cout << "\n";
		}
		cout << "---------------" << "\n";
	}
	return 0 ;

}