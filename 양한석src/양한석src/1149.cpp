#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	int hus[1001][3] = { {0} };
	cin >> n;
	int r, g, b;
	for (int i = 1; i <= n; i++) {
		cin >> hus[i][0] >> hus[i][1] >> hus[i][2];
	}
	for (int i = n - 1; i > 0; i--) {
		hus[i][0] += min(hus[i + 1][1], hus[i + 1][2]);
		hus[i][1] += min(hus[i + 1][0], hus[i + 1][2]);
		hus[i][2] += min(hus[i + 1][1], hus[i + 1][0]);
	}
	cout << min(min(hus[1][0], hus[1][1]), hus[1][2]);
	return 0;
}