#include <iostream>
using namespace std;
int main() {
	int m, n, time;
	int gcd, lcm;
	cin >> m >> n;
	time = m * n;
	for (; m % n != 0 && n % m != 0;) {
		if (m > n) {
			m %= n;
		}
		else {
			n %= m;
		}
	}
	if (m < n) {
		gcd = m;
	}
	else {
		gcd = n;
	}
	lcm = time / gcd;
	cout << gcd << '\n' << lcm;
}