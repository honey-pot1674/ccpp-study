#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int sum = i;
		int box = i;
		for (; box > 0;) {
			sum += box % 10;
			box /= 10;
		}
		if (sum == n) {
			cout << i;
			return 0;
		}
	}
	cout << 0;
	return 0;
}