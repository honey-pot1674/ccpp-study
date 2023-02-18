#include <iostream>
#include <queue>
using namespace std;
int main() {
	int n, k;
	int cnt = 0;
	queue<int> q;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	cout << '<';
	for (; !q.empty();) {
		cnt++;
		if (cnt % k == 0) {
			cout << q.front();
			q.pop();
			if (q.empty()) {
				cout << '>';
				return 0;
			}
			else {
				cout << ", ";
			}
		}
		else {
			q.push(q.front());
			q.pop();
		}
	}
	return 0;
}