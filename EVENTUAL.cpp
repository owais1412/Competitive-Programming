// CC https://www.codechef.com/COOK120B/problems/EVENTUAL

#include <iostream>
#include <map>
#include <vector>

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
		string s; cin >> s;
		map<char, int> m;
		for (auto x : s) {
			if (m.find(x) == m.end()) m[x] = 1;
			else m[x]++;
		}
		bool flag = false;
		for (auto i = m.begin(); i != m.end(); i++) {
			if ((i->second) % 2 == 1) {
				flag = true;
				break;
			} else {

			}
		}
		if (flag) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0 ;

}