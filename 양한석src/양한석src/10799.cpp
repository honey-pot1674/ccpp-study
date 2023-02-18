#include <iostream>
using namespace std;
int main() {
	string str;
	int piece = 0;
	int n = 0;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			if (str[i + 1] == ')') {
				piece += n;
			}
			else {
				++n;
			}
		}
		else {
			if (str[i - 1] != '(') {
				--n;
				++piece;
			}
		}
	}
	cout << piece;
}