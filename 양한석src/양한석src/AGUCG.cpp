#include <iostream>
using namespace std;
int main() {
	int n;
	long long k, geol = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j > 0; j /= 10) geol *= 10;
		geol += i;
		geol %= k;
	}
	cout << geol;
}