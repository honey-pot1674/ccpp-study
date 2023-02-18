#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long k, a, b, c, d;
	cin >> k;
	cin >> a >> b >> c >> d;
	if ((a - c) * k == d - b) cout << "Yes " << a * k + b;
	else cout << "No";
	return 0;
}