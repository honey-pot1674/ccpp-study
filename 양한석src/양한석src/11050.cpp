#include <iostream>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	int fn = 1, fk = 1, fnmk = 1;
	for (int i = 2; i <= n; i++) {
		fn *= i;
	}
	for (int i = 2; i <= k; i++) {
		fk *= i;
	}
	for (int i = 2; i <= n - k; i++) {
		fnmk *= i;
	}
	cout << fn / (fk * fnmk);
}