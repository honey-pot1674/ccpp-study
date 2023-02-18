#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int card[100];
	int n, m;
	int mx = 0;
	int sum;
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> card[i];
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				sum = card[i] + card[j] + card[k];
				if (sum <= m) {
					mx = max(mx, sum);
				}
			}
		}
	}
	cout << mx;
}