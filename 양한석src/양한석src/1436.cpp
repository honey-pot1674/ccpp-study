#include <iostream>
using namespace std;
int main() {
	int ipt;
	cin >> ipt;
	int cnt = 0;
	int sto;
	bool D;
	int i;
	for (i = 666;; i++) {
		sto = i;
		for (;sto > 100; sto /= 10) {
			if (sto % 1000 == 666) {
				cnt++;
				break;
			}
		}
		if (cnt == ipt)break;
	}
	cout << i;
}