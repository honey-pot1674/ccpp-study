#include <iostream>
using namespace std;
int main() {
	long long n;
	int m = 0;
	cin >> n;
	for (; n > 0;) {
		if (n == 1) n--;
		else if (n % 2) n += 1;
		n /= 2;
		m++;
	}
	cout << m;
}