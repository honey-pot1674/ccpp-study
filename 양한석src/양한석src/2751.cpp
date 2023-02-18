#include <iostream>
#include <algorithm>
#define MAX 1000000
using namespace std;
int arr[MAX];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n, less<>());
	for (int i = 0; i < n; i++) {
		cout << arr[i] << '\n';
	}
	return 0;
}