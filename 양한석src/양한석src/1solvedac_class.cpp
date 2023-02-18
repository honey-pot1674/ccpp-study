#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	char c[101] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += c[i] - '0';
	}
	cout << sum;
}