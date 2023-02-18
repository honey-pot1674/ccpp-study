#include <iostream>
using namespace std;
int main() {
	int x,stick=0;
	cin >> x;
	for (; x > 0;) {
		if (x % 2==1) ++stick;
		x /= 2;
	}
	cout << stick;
}