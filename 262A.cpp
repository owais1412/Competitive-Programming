// CF https://codeforces.com/contest/262/problem/A

#include <bits/stdc++.h>

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL) ;
	long long int n, k, a, ans, c = 0;
	cin >> n >> k;
	ans = n;
	for (; n--; c = 0) {
		cin >> a;
		while (a) {
			if (a % 10 == 4 || a % 10 == 7)c++;
			a /= 10;
		}
		if (c > k)ans--;
	}
	cout << ans << "\n";
	return 0 ;
}
