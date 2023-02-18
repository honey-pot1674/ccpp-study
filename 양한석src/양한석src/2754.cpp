#include <iostream>
using namespace std;
int main() {
	string s;
	int t = 0, d = 0;
	cin >> s;
	if (s[0] == 'F') {
		cout << "0.0";
		return 0;
	}
	else if (s[0] == 'A') t = 4;
	else if (s[0] == 'B') t = 3;
	else if (s[0] == 'C') t = 2;
	else if (s[0] == 'D') t = 1;
	if (s[1] == '+') d = 3;
	else if (s[1] == '0') d = 0;
	else if (s[1] == '-') {
		t--;
		d = 7;
	}
	cout << t << '.' << d;
}