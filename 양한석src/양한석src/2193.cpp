#include <iostream>
using namespace std;
long long pn[91] = { 0 };
void pnr() {
	pn[1] = 1;
	for (int i = 2; i <= 90; i++) {
		pn[i] = pn[i - 1] + pn[i - 2];
	}
	return;
}
int main() {
	pnr();
	int n;
	cin >> n;
	cout << pn[n];
	return 0;
}