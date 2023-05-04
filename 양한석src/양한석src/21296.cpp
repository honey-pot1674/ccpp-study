/*
x = N! * 10 / (10^(N!ÀÇ ÀÚ¸´¼ö - 1))
998244353
|x-qdf(x)| <= 0.000000000000015
*/
#include <iostream>
using namespace std;
int main() {
	long long n;
	long double x = 720;
	for (n = 7; n<=100; n++) {
		x *= n;
		while (x > 100) {
			x /= 10;
		}
		cout << x << endl;
	}
}