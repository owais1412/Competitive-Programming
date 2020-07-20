// CF https://codeforces.com/contest/265/problem/A

#include <bits/stdc++.h>

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL) ;
	string s, t;
	getline(cin, s);
	getline(cin, t);
	int j = 0;
	for (int i = 0; i < t.length(); i++) {
		if (s[j] == t[i]) j++;
	}
	cout << j + 1;
	return 0 ;
}