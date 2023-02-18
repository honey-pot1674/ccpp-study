#include <iostream>
#include <algorithm>

bool cmp(const int& n1,const int& n2){
	return n1 < n2;
}

using namespace std;
int main() {
	int h[9];
	int sum = 0;
	int i, j;
	for (int i = 0; i < 9; i++) {
		cin >> h[i];
		sum += h[i];
	}

	sort(&h[0], &h[9],cmp);

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if (i != j && sum - h[i] - h[j] == 100) {
				break;
			}
		}
		if (j < 9) {		
			for (int k = 0; k < 9; k++) {
				if (k != i && k != j) {
					cout << h[k] << "\n";
				}
			}
			return 0;
		}
	}
}