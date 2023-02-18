#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<char> l, r;
	string str;
	int m, i;
	char cmd, inp;
	cin >> str;
	for (i = 0; i < str.length(); i++) {
		l.push(str[i]);
	}
	cin >> m;
	for (i = 0; i < m; i++) {
		cin >> cmd;
		if (cmd == 'P') {
			cin >> inp;
			l.push(inp);
		}
		else if (cmd == 'L' && !l.empty()) {
			r.push(l.top());
			l.pop();
		}
		else if (cmd == 'D' && !r.empty()) {
			l.push(r.top());
			r.pop();
		}
		else if (cmd == 'B' && !l.empty()) {
			l.pop();
		}
	}
	while (!l.empty()) {
		r.push(l.top());
		l.pop();
	}
	while (!r.empty()) {
		cout << r.top();
		r.pop();
	}
}