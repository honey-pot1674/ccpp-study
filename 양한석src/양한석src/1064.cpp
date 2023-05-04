#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	double ax, ay, bx, by, cx, cy;
	cout.precision(18);
	cin >> ax >> ay >> bx >> by >> cx >> cy;
	if ((ay - by) / (ax - bx) == (by - cy) / (bx - cx)) {
		cout << -1;
		return 0;
	}
	double ab, bc, ca;
	ab = ((bx - ax) * (bx - ax) + (by - ay) * (by - ay));
	bc = ((cx - bx) * (cx - bx) + (cy - by) * (cy - by));
	ca = ((ax - cx) * (ax - cx) + (ay - cy) * (ay - cy));
	double f, t;
	f = sqrt(max(ab, max(bc, ca)));
	t = sqrt(min(ab, min(bc, ca)));
	cout << 2 * (f - t);
}