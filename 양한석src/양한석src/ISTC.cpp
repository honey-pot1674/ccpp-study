#include <iostream>
#include <deque>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int n;
	deque<int>d, d2;
	cin >> n;
	d.push_back(1);
	d2.push_back((n + 1) / 2);
	for (int i = 2; i <= n; i++) {
		if (i % 2) {
			d.push_front(i);
			d2.push_back(d2[i - 2] - i + 1);
		}
		else {
			d.push_back(i);
			d2.push_back(d2[i - 2] + i - 1);
		}
	}
	cout << "YES\n";
	for (int j = 0, k = d.size(); j < k; j++) cout << d[j] << ' ';
	cout << '\n';
	for (int j = 0, k = d.size(); j < k; j++) cout << d2[j] << ' ';
}