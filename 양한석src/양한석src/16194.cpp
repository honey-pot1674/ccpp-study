#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, i;
	cin >> n;
	int p[1001] = { 0 };
	int bk[1001] = { 0 };
	for (i = 1; i <= n; i++) {
		cin >> p[i];
	}
	for (i = 1; i <= n; i++) {
		bk[i] = p[i];
		for (int j = i - 1; j >= i / 2; j--) {
			bk[i] = min(bk[i], bk[j] + bk[i - j]);
		}
	}
	cout << bk[n];
}