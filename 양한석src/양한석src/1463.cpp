#include <iostream>
#include <algorithm>
#define MAX (int)1e6+1
using namespace std;
int x[MAX];
int main() {
	x[1] = 0;
	int s, n;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		s = x[i - 1];
		if (i % 2 == 0) {
			s = min(s, x[i / 2]);
		}
		if (i % 3 == 0) {
			s = min(s, x[i / 3]);
		}
		x[i] = s + 1;
	}
	
	cout << x[n];
	return 0;
}