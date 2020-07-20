// CF https://codeforces.com/contest/144/problem/A

#include <bits/stdc++.h>

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL) ;
	int n, maxH = INT_MIN, minH = INT_MAX, indexMin, indexMax;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x > maxH) {
			maxH = x;
			indexMax = i;
		}
		if (x <= minH) {
			minH = x;
			indexMin = i;
		}
	}
	n--;
	if (indexMax > indexMin) indexMin++;
	cout << indexMax + n - indexMin << "\n";
	return 0 ;

}