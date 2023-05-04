#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int d = 0, p = 0, n;
	char ipt;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ipt;
		if (d - p < 2 && p - d < 2) {
			if (ipt == 'D') d++;
			else if (ipt == 'P') p++;
		}
	}
	cout << d << ':' << p;
}