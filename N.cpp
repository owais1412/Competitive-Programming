// CF https://codeforces.com/contest/136/problem/A

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
	set<pair<int, int>> s;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.insert({x, i + 1});
	}
	for (pair<int, int> x : s) {
		cout << x.second << " ";
	}
	cout << "\n";
	return 0 ;

}