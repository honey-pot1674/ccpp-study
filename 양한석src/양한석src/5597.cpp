#include <iostream>
using namespace std;
int main() {
	bool x[30] = { false };
	int n;
	for (int i = 0; i < 28; i++) {
		cin >> n;
		x[n - 1] = true;
	}
	for (int i = 0; i < 30; i++) if (!x[i]) cout << i + 1 << '\n';
}