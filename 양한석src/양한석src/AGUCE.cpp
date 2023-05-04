#include <iostream>
using namespace std;
int main() {
	cout.precision(10);
	float da, db, x, tmp;
	cin >> da >> db >> x;
	if (db > da) {
		tmp = db;
		db = da;
		da = tmp;
	}
	cout << (100 * da * db) / (db * x + da * (100 - x));
}