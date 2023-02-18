#include <iostream>
using namespace std;
int main() {
	string j, d;
	cin >> j;
	cin >> d;
	if (j.size() >= d.size()) cout << "go";
	else cout << "no";
}