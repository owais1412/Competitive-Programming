// CF https://codeforces.com/contest/1385/problem/B

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
		int n; cin >> n;
		n *= 2;
		unordered_set<int> s;
		while (n--) {
			int x; cin >> x;
			if (s.find(x) != s.end()) {
				cout << x << " ";
			} else {
				s.insert(x);
			}
		}
		cout << "\n";
	}
	return 0 ;

}