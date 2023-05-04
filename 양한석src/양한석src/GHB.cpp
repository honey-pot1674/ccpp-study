#include <iostream>
using namespace std;
int t[86401] = { 0 };
int main() {
	int c, h, s;
	int ch = 0;
	string dummy;
	cin >> c >> h;
	for (int i = 0; i < c + h; i++) {
		s = 0;
		cin >> dummy;
		s += ((dummy[0] - 48) * 10 + (dummy[1] - 48)) * 3600 + ((dummy[3] - 48) * 10 + (dummy[4] - 48)) * 60 + ((dummy[6] - 48) * 10 + dummy[7] - 48);
		for (int j = s; j < s + 40; j++) t[j] = 1;
	}
	for (int i = 1; i <= 86400; i++) if (!t[i]) ch++;
	cout << ch;
}