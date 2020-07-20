// CF https://codeforces.com/problemset/problem/118/B

#include <bits/stdc++.h>

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL) ;
	int n; cin >> n;
	for (int i = 1; i <= n + 1; i++) {
		for (int j = 1 ; j <= n - i; j++) {
			cout << "  ";
		}
		// int l = 1;
		cout << 0 << "\n";
		for (int k = 1; k <= i; k++) {
			cout << k << " ";
		}
		for (int l = i - 1; l >= 1; l--) {
			cout << l << " ";
		}
	}
	return 0 ;

}