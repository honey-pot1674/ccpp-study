#include <iostream>
#define M 1234567891
#define R 31
using namespace std;
int main() {
	int l;
	long long hsh = 0;
	string str;
	cin >> l;
	cin >> str;
	for (int i = str.size()-1; i >= 0; i--) {
		hsh *= R;
		hsh %= M;
		hsh += str[i] - 96;
		hsh %= M;
	}
	cout << hsh;
	return 0;
}