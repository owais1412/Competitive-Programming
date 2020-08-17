#include <iostream>
#include <cmath>
#include <stack>
using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL) ;
	long long int n, sum, a, b, m = pow(10, 9) + 7;
	cin >> n;
	cin >> a >> b;
	sum = 0;
	int mat[n];
	for (int i = 0; i < n; i++) {
		cin >> mat[i];
		sum += mat[i];
	}
	long long int r = 0, ans = 0;
	stack<int> stk;
	for (int i = 0; i < n; i++) {
		while (!stk.empty() && mat[i] <= mat[stk.top()]) {
			long long int x = stk.top();
			stk.pop();
			r = mat[x] * (stk.empty() ? i : (i - stk.top() - 1));
			ans = max(ans % m, r);
		}
		stk.push(i);
	}
	while (!stk.empty()) {
		long long int x = stk.top();
		stk.pop();
		r = mat[x] * (stk.empty() ? n : (n - stk.top() - 1));
		ans = max(ans % m, r);
	}
	cout << ((sum % m - ans % m) % m * a % m * b % m) % m;
	return 0 ;

}