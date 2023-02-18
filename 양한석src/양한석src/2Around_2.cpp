#include <iostream>
#include <algorithm>
using namespace std;
int rib[150][3] = { 0 };
int lop(int bgn,int end) {
	if (bgn == end) {
		return rib[bgn][2];
	}
	if (bgn > end) {
		return rib[end][bgn];
	}

}
int main() {
	int n,f,s;
	int lrg=0,cnt;
	int scr = 0;
	bool fst = true;
	cin >> n;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < n; j++) {
			cin >> rib[j][i];
			if (i == 1) {
				lrg = rib[lrg][1] < rib[j][1] ? j : lrg;
			}
		}
	}
	for (cnt = rib[lrg][1]; cnt <= 0; cnt--) {
		for (int i = 0; i < n; i++) {
			if (rib[i][1] == cnt && i != lrg) {
				lop(i, lrg);
			}
		}
	}
}