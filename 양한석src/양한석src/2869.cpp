#include <iostream>
using namespace std;
int main() {
	int a, b, v;
	int day;
	cin >> a >> b >> v;
	v -= a;
	day = v / (a - b) + 1;
	if (v % (a - b) != 0) day++;
	cout << day;
	return 0;
}