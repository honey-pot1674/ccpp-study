#include <iostream>
using namespace std;
int main() {
	int n, arr[201] = { 0, }, ipt;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ipt;
		arr[ipt+100]++;
	}
	cin >> ipt;
	cout << arr[ipt+100];
}