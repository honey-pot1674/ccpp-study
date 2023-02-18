#include <iostream>
#include <algorithm>
#define MAX 100000
using namespace std;
int arr[MAX + 1] = { 0 };
void sq() {
	int s;
	for (int i = 1; i * i <= MAX; i++) {
		arr[i * i] = 1;
	}

	for (int i = 1; i <= MAX; i++) {

		if (arr[i] == 0) {
			
			s = arr[i - 1];
			
			for (int j = 2; j * j < i; j++) {
				s = min(s, arr[i - (j * j)]);
			}

			arr[i] = s + 1;

		}

	}

	return;
}
int main() {
	sq();

	int n;

	cin >> n;
	cout << arr[n];
	return 0;
}