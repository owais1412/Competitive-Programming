#include <bits/stdc++.h>

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL) ;
	int n = 49;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int len = v.size();
	cout << v.size() ;
	for (int i = 0; i < len; i++) {
		cout << v[i] << " ";
	}
	return 0 ;

}