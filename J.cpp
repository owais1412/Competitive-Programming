// CF https://codeforces.com/contest/49/problem/A

#include <bits/stdc++.h>
// #define pb push_back
// #define mp make_pair
// #define fr first
// #define sc second
// #define MOD 1000000007
// #define len(x) x.size()
// #define min3(a, b, c) min(a, min(b, c))
// #define max3(a, b, c) max(a, max(b, c))
// #define all(v) v.begin(), v.end()
// #define alla(a,n) a, a + n

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
    string s;
    getline(cin, s);
    int i = s.length() - 1;
    while (i >= 0 && (s[i] == ' ' || s[i] == '?')) {
        i--;
    }
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' || s[i] == 'A'\
            || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
        cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0 ;

}