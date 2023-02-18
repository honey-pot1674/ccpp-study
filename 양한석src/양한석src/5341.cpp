#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, sum;

	for (;;) {
		sum = 0;
		cin >> n;
		if (n == 0) break;
		for (int i = 1; i <= n; i++) sum += i;
		cout << sum << '\n';
	}
}