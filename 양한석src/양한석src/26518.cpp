#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long long a1, a2, b, c;
	cin >> b >> c >> a1 >> a2;
	cout << fixed;
	cout.precision(10);
	
	cout << (b + sqrt(b * b + 4 * c)) / 2;
}