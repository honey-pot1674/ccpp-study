#include <iostream>
#include <string>
#include <sstream>

using namespace std;



int main() {
	string s;
	int count = 0;
	getline(cin, s);

	istringstream iss(s);

	string tmp;
	for (; iss >> tmp;) {
		++count;
		//cout << tmp.length() << '\n';
	}
	cout << count;
}