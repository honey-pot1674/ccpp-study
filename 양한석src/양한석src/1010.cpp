#include <iostream>
using namespace std;
int main() {
	int n, m, t;
	long long brg = 1;
	cin >> t;
	for (int j = 0; j < t; j++) {
		brg = 1;
		cin >> n >> m;
		for (int i = m; i > m - n; i--) {
			brg *= i;
			brg /= (m + 1) - i;
		}
		cout << brg << '\n';
	}
}