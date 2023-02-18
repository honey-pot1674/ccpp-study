#include <iostream>
using namespace std;
long long gcd(long long a, long long b) {
	return (a % b == 0 ? b : gcd(b, a % b));
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n, b, x, y;
	cin >> n >> b;
	long long a = 0;
	b *= n * -1;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		a += x;
		b += y;
	}
	if (a == 0) cout << "EZPZ";
	else if (b % a == 0) cout << b / a;
	else {
		long long pill = gcd(b,a);
		b /= pill;
		a /= pill;
		if (a < 0) {
			a *= -1;
			b *= -1;
		}
		cout << b << "/" << a;
	}
}