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
bool isVowel(char ch) {
    if (ch != 'a' && ch != 'e' && ch != 'i'
            && ch != 'o' && ch != 'u')
        return false;

    return true;
}

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    int t ;
    cin >> t ;
    while (t--) {
        string s;
        cin >> s;
        int ans = 0;
        for (char x : s) {
            if (!isVowel(x)) {
                // int temp = ((int)x) - 96;
                if (x > 'a' && x < 'e') {
                    if (abs(x - 'a') > abs(x - 'e'))
                        ans += abs(x - 'e');
                    else
                        ans += abs(x - 'a');
                }
                else if (x > 'e' && x < 'i') {
                    if (abs(x - 'e') > abs(x - 'i'))
                        ans += abs(x - 'i');
                    else
                        ans += abs(x - 'e');
                }
                else if (x > 'i' && x < 'o') {
                    if (abs(x - 'i') > abs(x - 'o'))
                        ans += abs(x - 'o');
                    else
                        ans += abs(x - 'i');
                }
                else if (x > 'o' && x < 'u') {
                    if (abs(x - 'o') > abs(x - 'u'))
                        ans += abs(x - 'u');
                    else
                        ans += abs(x - 'o');
                }
                else if (x > 'u')
                    ans += abs(x - 'u');
            }
        }
        cout << ans << "\n";
    }

    return 0 ;

}