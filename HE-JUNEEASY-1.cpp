// https://www.hackerearth.com/challenges/competitive/july-easy-20/algorithm/kshitiz-and-matrix-7ddc9719/

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
		long long int n, m; cin >> n >> m;
		long long int arr[n][m];
		long long int minVal = 1, maxVal = INT_MIN;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				long long int x; cin >> x;
				arr[i][j] = x;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				long long int x = arr[i][j];
				if (x > maxVal) maxVal = x;
				if (x <= minVal) minVal = x;
			}
		}
		long long int minRow, minCol, maxRow, maxCol;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == minVal) {
					minRow = i;
					minCol = j;
				}
				if (arr[i][j] == maxVal) {
					maxRow = i;
					maxCol = j;
				}
			}
		}
		for (int i = 0; i < m; i++) {
			arr[minRow][i] = -1;
		}
		for (int i = 0; i < n; i++) {
			arr[i][minCol] = -1;
		}
		for (int i = 0; i < m; i++) {
			arr[maxRow][i] = -1;
		}
		for (int i = 0; i < n; i++) {
			arr[i][maxCol] = -1;
		}
		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == -1) continue;
				ans++;
			}
		}
		cout << ans << "\n";
	}
	return 0 ;

}