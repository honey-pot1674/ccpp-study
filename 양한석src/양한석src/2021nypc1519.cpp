#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<long long>a;
	int n, num = 0;
	long long ipt, sum = 0, sml = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> ipt;

		a.push_back(ipt);
		sum += ipt;

		if (sum < 0) {
			sml = 0;

			for (int j = 1; j < a.size(); j++) {
				a[sml] > a[j] ? sml = j : sml = sml;
			}

			sum -= a[sml];
			a[sml] = 0;
			num++;
		}
	}

	cout << num;
}