#include <iostream>
#define MAX 100000
using namespace std;
int nt[2][MAX + 1] = { {0} };
int main() {
	int tc, n, score;
	cin >> tc;
	for (int i = 0; i < tc; i++) {
		cin >> n;
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < n; k++) {
				cin >> nt[j][k];
			}
		}
	}
}