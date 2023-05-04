#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n = 1, time = 1;
	int cmd;
	int c, x;
	cin >> cmd;
	for (int i = 0; i < cmd; i++) {
		cin >> c;
		if (c == 0) {
			cin >> x;
			n += x;
		}
		else if (c == 1) {
			cin >> x;
			time *= x;
			n *= x;
		}
		else if (c == 2) {
			cin >> x;
			n += x*time;
		}
		else if (c == 3) {
			cout << n << '\n';
		}
	}
}