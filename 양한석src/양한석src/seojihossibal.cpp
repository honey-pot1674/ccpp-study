#include <iostream>
using namespace std;
int main() {
	int tc, a, b, tm;
	cin >> tc;
	for (int i = 0; i < tc; i++) {
		cin >> a >> b;
		tm = 1;
		for (int j = 0; j < b; j++) {
			tm = (tm * a) % 10;
		}
		if (tm == 0) {
			tm += 10;
		}
		cout << tm << '\n';
	}
	return 0;
}