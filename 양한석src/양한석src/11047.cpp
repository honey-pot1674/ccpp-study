#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<int>val;
	int n, k, ipt, num = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> ipt;
		val.push(ipt);
	}
	for (; !val.empty();) {
		num += k / val.top();
		k %= val.top();
		val.pop();
	}
	cout << num;
}