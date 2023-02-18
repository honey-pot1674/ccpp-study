#include <iostream>
#include <queue>
using namespace std;
int main() {
	queue<int>q;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	bool prf = true;
	for (; q.size() > 1;) {
		if (prf) {
			q.pop();
		}
		else {
			q.push(q.front());
			q.pop();
		}
		prf = !prf;
	}
	cout << q.front();
}