#include <iostream>
using namespace std;
bool r[1000001];
void dp() {
	r[0] == r[1] == false;
	for (int i = 2; i <= 1000000; i++) r[i] = true;
	for (int i = 2; i <= 1000000; i++) {
		if (r[i]) {
			for (int j = 2; i * j <= 1000000; j++) {
				r[i * j] = false;
			}
		}
	}
	return;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	dp();
	int m, n;
	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		if (r[i]) cout << i << '\n';
	}
}