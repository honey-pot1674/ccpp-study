#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	int l, mx = 1;
	cin >> n;
	int ara[1001];
	int arl[1001] = { 0 };
	for (int i = 1; i <= n; i++) arl[i] = 1;
	for (int i = 1; i <= n; i++) cin >> ara[i];
	for (int i = 2; i <= n; i++) {
		l = 0;
		for (int j = i - 1; j > 0; j--) {
			if (ara[i] > ara[j]) {
				l = max(l, arl[j]);
			}
		}
		arl[i] += l;
		mx = max(mx, arl[i]);
	}
	cout << mx;
}