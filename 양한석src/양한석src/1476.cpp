#include <iostream>

using namespace std;

int main() {
	int e, s, m, year = 1;
	cin >> e >> s >> m;
	for (; e != 1 || s != 1 || m != 1;) {
		--e; --s; --m;
		if (e == 0) e = 15;
		if (s == 0) s = 28;
		if (m == 0) m = 19;
		++year;
	}
	cout << year;
}