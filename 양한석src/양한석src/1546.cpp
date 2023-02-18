#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	double score, sum = 0, large = 0;

	for (int i = 0; i < n; i++) {
		cin >> score;

		large = max(score, large);
		/*if (large < score) {
			large = score;
		}*/
		sum += score;
	}
	sum /= large * n;
	sum *= 100;
	cout << sum;
}