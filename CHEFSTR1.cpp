// CC https://www.codechef.com/JULY20B/problems/CHEFSTR1

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
		long long int n; cin >> n;
		long long int arr[n];
		long long int ans = 0;
		for (long long int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (long long int i = 0; i < n - 1; i++) {
			ans += abs(arr[i] - arr[i + 1]) - 1;
		}
		cout << ans << "\n";
	}
	return 0 ;

}