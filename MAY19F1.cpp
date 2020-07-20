// CC https://www.codechef.com/FLPAST01/problems/MAY19F1

// CC https://www.codechef.com/JULY20B/problems/PTMSSNG

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

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
		long long int n, q; cin >> n >> q;
		long long int arr[n], sum[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sum[0] = arr[0];
		for (int i = 1; i < n; i++) {
			sum[i] = sum[i - 1] + arr[i];
		}
		// for (int i = 0; i < n; i++) {
		// 	cout << arr[i] << " ";
		// }
		// cout << endl;
		// for (int i = 0; i < n; i++) {
		// 	cout << sum[i] << " ";
		// }
		// cout << endl;
		// // cout << sum[4] - sum[3];
		// cout << sum[1] - arr[1];
		while (q--) {
			int x; cin >> x;
			if (x <= 2) {
				if (x == 1) {
					cout << arr[1] << "\n";
					continue;
				} else {
					cout << sum[x - 1] - arr[x - 1] << "\n";
				}
			} else {
				cout << sum[x - 1] - sum[x - 2] << "\n";
			}
		}
	}
	return 0 ;

}