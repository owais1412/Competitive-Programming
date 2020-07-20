// CC https://www.codechef.com/JULY20B/problems/CRDGAME

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
		int n, xDig, yDig; cin >> n;
		int chef = 0, monty = 0;
		while (n--) {
			cin >> x >> y;
			xDig = sumOfDigits(x);
			yDig = sumOfDigits(y);
			if (xDig > yDig) chef++;
			else if (xDig < yDig) monty++;
			else {
				chef++; monty++;
			}
		}
		if (chef > monty) cout << 0 << " " << chef << "\n";
		else if (chef < monty) cout << 1 << " " << monty << "\n";
		else cout << 2 << " " << monty << "\n";
	}
	return 0 ;

}