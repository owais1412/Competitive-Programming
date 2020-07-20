// CF https://codeforces.com/contest/233/problem/A

#include <bits/stdc++.h>

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL) ;
	int n;
	cin >> n;
	if (n % 2) cout << -1;
	else {
		int arr[n + 1];
		for (int i = 1; i <= n; i++) {
			arr[i] = i;
		}
		for (int i = 1; i < n; i += 2) {
			swap(arr[i], arr[i + 1]);
		}
		for (int i = 1; i <= n; i++) {
			cout << arr[i] << " ";
		}
	}
	return 0 ;

}