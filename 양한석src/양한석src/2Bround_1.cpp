#include <iostream>
#include <vector>
using namespace std;
vector<long long>c;
long long k, l, r;
void fuc(long long pla,bool rev,int depth) {
	long long ds = 1;
	if (depth != 0) {
		for (int j = 0; j < depth - 1; j++)
			ds *= 2;
		fuc(pla, !rev, depth - 1);
		fuc(pla + ds, rev, depth - 1);
	}
	else {
		c[pla] = c[pla-1] + !rev;
	}
	return;
}
int main() {
	int T;
	cin >> T;
	int num = 0;
	long long size = 1;
	for (int i = 0; i < T; i++) {
		num = 0;
		size = 1;
		cin >> k >> l >> r;
		for (int j = 0; j < k; j++)
			size *= 2;
		c.clear();
		c.resize(size + 1, 0);
		fuc(1, true, k);
		cout << c[r]-c[l-1] << '\n';
	}
}