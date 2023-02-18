#include <iostream>
#include <string>
#include <stack>
using namespace std;
void toppop(string s) {
	stack<char>flip;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ') {
			flip.push(s[i]);
		}
		else {
			for (; flip.size() > 0;) {
				cout << flip.top();
				flip.pop();
			}
			cout << ' ';
		}
	}
	for (; flip.size() > 0;) {
		cout << flip.top();
		flip.pop();
	}
	cout << ' ';
	cout << endl;
	return;
}

int main() {
	int tc;
	cin >> tc;
	cin.ignore();

	string str;
	
	for (int i = 0; i < tc; i++) {
		getline(cin, str);
		toppop(str);
	}
}