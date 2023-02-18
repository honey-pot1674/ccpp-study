#include <iostream>
#include <algorithm>
using namespace std;
long long arr[1000001] = { 0 };
void dp() {
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int i = 4; i <= 1000000; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2] + arr[i - 3])%1000000009;
	}
	return;
}
int main() {
	dp();
	int tc,n;
	cin >> tc;
	for (int i = 0; i < tc; i++) {
		cin >> n;
		cout << arr[n]<<'\n';
	}
}