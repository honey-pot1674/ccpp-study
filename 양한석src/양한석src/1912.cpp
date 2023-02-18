#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n,l;
	int arr[100001] = { 0 };
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		arr[i] = max(arr[i], arr[i] + arr[i - 1]);
	}
	l = arr[1];
	for (int i = 2; i <= n; i++) {
		l = max(arr[i], l);
	}
	cout << l;
}