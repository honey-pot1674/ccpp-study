#include <iostream>

using namespace std;

int main() {
	int count[26] = { 0 };
	int many = 0, num = 0;
	char sto;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i]>'Z') {
			s[i] -= 32;
		}
		++count[s[i] - 'A'];
		if (count[s[i] - 'A'] > many) {
			many = count[s[i] - 'A'];
		}
	}
	for (int i = 0; i < 26; i++) {
		if (count[i] == many) {
			++num;
			sto = i + 65;
		}
		if (num > 1) {
			cout << "?";
			return 0;
		}
	}
	cout << sto;
}