#include <bits/stdc++.h>
// #define pb push_back
// #define mp make_pair
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a,n) a, a + n

using namespace std;

bool sortbysec(const vector<int> &a,
               const vector<int> &b) {
    if (a[1] < b[1]) {
        return true;
    } else if (a[1] > b[1]) {
        return false;
    } else {
        if (a[0] > b[0]) {
            return true;
        } else if (a[0] < b[0]) {
            return false;
        } else {
            return a[2] > b[2];
        }
    }
}
int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
    int n;
    cin >> n;
    std::vector<vector<int>> v;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        vector<int> tempV;
        tempV.push_back(x);
        tempV.push_back(y);
        tempV.push_back(i + 1);
        v.push_back(tempV);
    }
    sort(v.begin(), v.end(), sortbysec);
    for (int i = 0; i < n; i++) {
        cout << v[i][2] << " ";
    }
    cout << "\n";
    return 0 ;

}