#include <iostream>
using namespace std;
int whygod[15][15] = { {0} };
void dp() {
	for (int i = 1; i <= 14; i++) {
		whygod[0][i] = i;
	}
	for (int i = 1; i <= 14; i++) {
		for (int j = 1; j <= 14; j++) {
			for (int k = 1; k <= j; k++) {
				whygod[i][j] += whygod[i - 1][k];
			}
		}
	}
	return;
}
int main() {
	dp();
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int k, n;
		cin >> k >> n;
		cout << whygod[k][n] << '\n';
	}
}