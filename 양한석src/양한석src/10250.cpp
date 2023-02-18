#include <iostream>
using namespace std;
int main() {
	int t;
	int h, w, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		int fl = 1;
		for (; n - h > 0;) {
			n -= h;
			fl++;
		}
		cout << n * 100 + fl << '\n';
	}
	return 0;
}