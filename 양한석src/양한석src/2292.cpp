#include <iostream>
using namespace std;
int main() {
	long long n;
	int i = 0;
	cin >> n;
	n -= 1;
	i++;
	for (; n > 0;i++) {
		n -= 6 * i;
	}
	cout << i;
}