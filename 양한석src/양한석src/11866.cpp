#include <iostream>
#include <queue>
using namespace std;
int main() {
	queue<int>yes;
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)yes.push(i);
	cout << '<';
	for (; !yes.empty();) {
		for (int i = 0; i < k - 1; i++) {
			yes.push(yes.front());
			yes.pop();
		}
		cout << yes.front();
		yes.pop();
		if (!yes.empty())cout << ", ";
	}
	cout << '>';
}