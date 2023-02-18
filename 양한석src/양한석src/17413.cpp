#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	string str;
	stack<char> s;
	int d = 0;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (d) {
			cout << str[i];
			if (str[i] == '>') {
				d = 0;
			}
			continue;
		}	
		if (str[i] == ' ') {
			for (; !s.empty();) {
				cout << s.top();
				s.pop();
			}
			cout << ' ';
			continue;
		}
		if (str[i] == '<') {		
			d = 1;
			for (; !s.empty();) {
				cout << s.top();
				s.pop();
			}
			cout << '<';
			continue;
		}
		s.push(str[i]);
	}
	for (; !s.empty();) {
		cout << s.top();
		s.pop();
	}
}