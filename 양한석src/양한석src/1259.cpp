#include <iostream>
using namespace std;
int main() {
	int ipt;
	int str;
	int tpi=0;
	for (;;) {
		tpi = 0;
		cin >> ipt;
		if (ipt == 0) {
			break;
		}
		str = ipt;
		for (; str > 0;) {
			tpi = tpi * 10 + str % 10;
			str /= 10;
		}
		if (ipt == tpi) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}
}