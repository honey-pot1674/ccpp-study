#include <iostream>
using namespace std;
bool D(int a, int b, int c) {
	return ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b));
}
int main() {
	int a, b, c;
	for (;;) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		if (D(a, b, c)) {
			cout << "right\n";
		}
		else {
			cout << "wrong\n";
		}
	}
	return 0;
}