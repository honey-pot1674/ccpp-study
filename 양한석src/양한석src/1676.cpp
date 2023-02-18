#include <iostream>
using namespace std;
int main() {
	int n;
	int con = 0;
	cin >> n;
	for (; n > 1; ) {
		con += n / 5;
		n /= 5;
	}
	cout << con;
}