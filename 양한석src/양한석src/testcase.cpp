#include <iostream>
#include <vector>
using namespace std;
int main() {
	string ipt;
	vector<string> str;
	for (;;) {
		cin >> ipt;
		if (ipt == "0") break;
		str.push_back(ipt);
	}
	for (int i = 0; i < str.size() - 1; i++) {
		if (str[i] > str[i + 1]) {
			cout << "Not sort";
			return 0;
		}
	}
	cout << "sort";
	return 0;
}