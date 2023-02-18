#include <iostream>
#include <stack>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, ipt;
	stack<int>s;
	long long sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ipt;
		if (ipt == 0) s.pop();
		else s.push(ipt);
	}
	for (; !s.empty();) {
		sum += s.top();
		s.pop();
	}
	cout << sum;
}