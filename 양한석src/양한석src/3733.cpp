#include <iostream>
using namespace std;
int main() {
	int n, s, x;
	while (cin >> n >> s) {
		x = s / (n + 1);
		cout << x << '\n';
	}
}