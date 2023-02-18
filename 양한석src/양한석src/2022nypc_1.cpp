#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, m, fi;
	int t, i, s;
	bool d = true;
	int log[101];
	for (fi = 0; fi < 101; fi++) {
		log[fi] = -1;
	}
	cin >> n >> m;
	for (fi = 0; fi < m; fi++) {
		cin >> t >> i >> s;
		if (d) {
			if (s == 0) {
				if (log[i] != -1) {
					d = false;
					continue;
				}
				else {
					log[i] = t;
				}
			}
			else if (s == 1) {
				if ((log[i] == -1) || ((t - log[i]) < 60)) {
					d = false;
					continue;
				}
				else {
					log[i] = -1;
				}
			}
		}
	}
	for (int fi = 0; fi < 101; fi++) {
		if (log[fi] != -1) {
			d = false;
		}
	}
	if (d) {
		cout << "YES" << '\n';
	}
	else {
		cout << "NO" << '\n';
	}
	return 0;
}