// CF https://codeforces.com/contest/151/problem/A

#include <bits/stdc++.h>

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL) ;
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int totalML = k * l;//28
	int drinks = totalML / nl;//9
	int limes = c * d;//25
	int salt = p / np;//
	int m = 0;
	if (drinks < limes && drinks < salt) m = drinks;
	else if (limes < drinks && limes < salt) m = limes;
	else m = salt;
	cout << m / n << "\n";
	return 0 ;

}