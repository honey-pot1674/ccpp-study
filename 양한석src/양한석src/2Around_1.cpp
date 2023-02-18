#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int cur;

int main() {
	int n, lrg = 0;
	int pos = 1;
	int sam = 0;
	bool D = false;
	vector<int>arr;
	cin >> n;
	arr.resize(n);
	cin >> arr[0];
	for (int i = 1; i < n; i++) {
		cin >> arr[i];
		D = false;
		for (int j = i-1; j >= sam; j--) {
			if (arr[j] == arr[i]) {
				sam = j+1;
				lrg = max(lrg, pos);
				pos = i-j;
				D = true;
				break;
			}
		}
		if (!D) {
			pos++;
		}
	}
	lrg = max(lrg, pos);
	cout << lrg;
	return 0;
}