#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	stack<char>s;
	string ipt;
	bool D;
	for (;;) {
		getline(cin, ipt);
		if (ipt == ".") break;
		D = true;
		for (int i = 0; i < ipt.size(); i++) {
			if (ipt[i] == '(') s.push('(');
			else if (ipt[i] == ')') {
				if (s.empty() || s.top()!='(') {
					cout << "no\n";
					D = !D;
					break;
				}
				else s.pop();
			}
			else if (ipt[i] == '[') s.push('[');
			else if (ipt[i] == ']') {
				if (s.empty() || s.top()!='[') {
					cout << "no\n";
					D = !D;
					break;
				}
				else s.pop();
			}
		}
		if (s.empty() && D ) cout << "yes\n";
		else {
			if(D) cout << "no\n";
			for (; !s.empty();) s.pop();
		}
	}
}