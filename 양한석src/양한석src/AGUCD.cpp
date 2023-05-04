#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main() {
	int n;
	int dif = 0;
	string s;
	queue<char>c;
	stack<char>h;
	cin >> n;
	cin >> s;
	for (int i = 0; i < n; i++) {
		dif = 0;
		for (; !c.empty();) h.pop();
		for (; !h.empty();) h.pop();
		for (int j = 0; j <= i; j++) {
			c.push(s[j]);
			h.push(s[n-1-j]);
		}
		for (; !c.empty()&&!h.empty();) {
			if (c.front() != h.top())dif++;
			c.pop();
			h.pop();
		}
		if (dif == 1) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}