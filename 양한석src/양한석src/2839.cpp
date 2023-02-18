#include <iostream>
#include <algorithm>
using namespace std;
int kg[5001];
void dp() {
	for (int i = 0; i < 5001; i++) kg[i] = -1;
	kg[3] = 1;
	kg[5] = 1;
	for (int i = 6; i <= 5000; i++) {
		if (kg[i - 3] != -1) {
			kg[i] = kg[i - 3] + 1;
		}
		if (kg[i - 5] != -1) {
			if (kg[i] == -1) {
				kg[i] = kg[i - 5] + 1;
			}
			else {
				kg[i] = min(kg[i], kg[i - 5] + 1);
			}
		}
	}
	return;
}
int main() {
	dp();
	int n;
	cin >> n;
	cout << kg[n];
}