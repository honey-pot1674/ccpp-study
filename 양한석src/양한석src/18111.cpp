#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, b;
	int world[500][500] = {0,};
	cin >> n >> m >> b;
	int mx = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> world[i][j];
			mx = max(mx, world[i][j]);
		}
	}
	for (int i = mx; i >= 0; i++) {

	}
}