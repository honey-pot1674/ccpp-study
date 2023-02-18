#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, ipt;
	int cnt = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> ipt;
		if (ipt == cnt) {
			++cnt;
		}
	}
	cout << n - cnt + 1;
	return 0;
}