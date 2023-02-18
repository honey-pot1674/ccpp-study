#include <iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	for (int i = 0, j = s.size(); i < j; i++) {
		if (s[i] <= 90) cout << char(s[i] + 32);
		else cout << char(s[i] - 32);
	}
}