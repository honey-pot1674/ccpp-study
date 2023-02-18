#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, x;
	int a;
	vector<int>arr;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a < x) {
			arr.push_back(a);
		}
	}
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << ' ';
	}
}