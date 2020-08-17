#include <iostream>
#include <cmath>
#include <stack>
using namespace std;
int main() {
	long long int n, h = -1, k, c = 0, sx = 0, sy = 0, z = 0;
	cin >> n;
	long long int a[n] = {0}, x[n] = {0}, y[n] = {0}, i, j, c0 = 0, c1 = 0, r, f = 0;
	for (i = 0; i > a[i];
	        if (a[i] > h)
		        h = a[i];
		        i = 0; //INPUT 2 7 10, n=3
		while (1) {
			if ((long long int)pow(2, i) <= h)
					i++;
				else
					break;
			}
	for (j = 0; j0) {
	r = a[j] % 2;
		if (r == 0)
			c0++;
		else if (r == 1)
			c1++;
		a[j] = a[j] / 2;
	}
	x[j] = i - (c0 + c1) + c0;
	       y[j] = c1;
	       c0 = 0;
	       c1 = 0;

	       for (j = 0; j <= (long long int)pow(2, n); j++)
{
	sx = 0;
	sy = 0;
	for (k = 0; k0) {
			n++;
			z = z / 2;
		}
		// for (k = 0; k (c).to_string();

		const auto loc1 = s.find('1');

		if (loc1 != string::npos)
			s = s.substr(loc1);
		else
			s = '0' ;
		else {
			cout << s;
		}
	}
}