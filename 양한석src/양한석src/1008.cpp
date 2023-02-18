#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double a, b;
	cout << setprecision(9);
	cout << fixed;
	cin >> a >> b;
	cout << a / b;
}