// CF https://codeforces.com/contest/255/problem/A

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
	int arr[3] = {0, 0, 0};
	string a[] = {"chest", "biceps", "back"};
	int i = 0;
	while (n--) {
		int x; cin >> x;
		arr[i % 3] += x;
		i++;
	}
	int m = 0, index = 0;
	for (int j = 0; j < 3; j++) {
		if (m < arr[j]) {
			m = arr[j];
			index = j;
		}
	}
	cout << a[index];
	return 0 ;

}