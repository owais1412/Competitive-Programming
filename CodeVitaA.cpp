
#include <iostream>
#include <cmath>
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
	// char matrix[n][n];
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			char x;
			cin >> x;
			if (x == 'D') ans++;
		}
	}
	cout << floor(sqrt(ans));
	return 0 ;

}
// import math
// n = int(input())
// matrix = list()
// for _ in range(n):
//     matrix.append(list(map(str,input().split())))
// ans = 0
// for x in range(n):
//     for y in range(n):
//         if matrix[x][y] == "D":
//             ans += 1
// ans = math.sqrt(ans)
// ans = math.floor(ans)
// print(ans)