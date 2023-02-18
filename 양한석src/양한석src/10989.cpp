#include <iostream>
#define MAX 10001
using namespace std;
int wow[MAX] = { 0 };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int ipt;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ipt;
		wow[ipt]++;
	}
	for (int i = 1; i <= MAX-1; i++) {
		for (int j = 0; j < wow[i]; j++) {
			cout << i << '\n';
		}
	}
	return 0;
}