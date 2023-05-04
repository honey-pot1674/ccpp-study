#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int vowel = 0;
	for (;;) {
		s.clear();
		vowel = 0;
		getline(cin, s);
		if (s == "#") break;
		for (int i = 0, j = s.size(); i < j; i++) {
			if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u') {
				vowel++;
			}
		}
		cout << vowel << '\n';
	}
}