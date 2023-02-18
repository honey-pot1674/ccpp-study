#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<vector<vector<bool>>>pol;
vector<int>egg;
int main() {
	int n, m, k, q, count=0;
	int io, f, r1, r2, c1, c2;
	cin >> n >> m >> k >> q;
	pol.resize(n+1);
	for (int i = 1; i <= n; i++) {
		pol[i].resize(m + 1);
		for (int j = 1; j <= m; j++) {
			pol[i][j].resize(k + 1);
		}
	}
	egg.resize(k + 1);
	for (int i = 0; i < q; i++) {
		cin >> io >> f >> r1 >> c1 >> r2 >> c2;
		if (io == 1) {
			for (int i = r1; i <= r2; i++) {
				for (int j = c1; j <= c2; j++) {
					pol[i][j][f] = true;
				}
			}
		}
		else if (io == 2) {
			for (int i = r1; i <= r2; i++) {
				for (int j = c1; j <= c2; j++) {
					pol[i][j][f] = false;
				}
			}
		}
		int fish = 0;
		for (int i = r1; i <= r2; i++) {
			for (int j = c1; j <= c2; j++) {
				for (int l = 1; l <= k; l++) {
					if (pol[i][j][l]) {
						fish++;
					}
				}
				for (int l = 1; l <= k; l++) {
					if (pol[i][j][l]) {
						egg[l] += fish - 1;
					}
				}
			}
		}
	}
	for (int i = 1; i <= k; i++) {
		cout << egg[i] << '\n';
	}
	return 0;
}