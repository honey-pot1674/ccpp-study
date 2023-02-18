#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, ipt, sum = 0;
	vector<int>arr;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ipt;
		arr.push_back(ipt);
	}
	int sto = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] != arr[i - 1] + 1) {
			sum += sto;
			sto = arr[i];
		}
	}
	sum += sto;
	cout << sum;
}