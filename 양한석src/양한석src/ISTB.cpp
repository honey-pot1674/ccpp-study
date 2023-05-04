#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int uc = 0, dp = 0;
	int dpc = 0, cmp = 0;
	string ipt;
	cin >> ipt;
	for (int i = 0, j = ipt.size(); i < j; i++) {
		if (ipt[i] == 'U' || ipt[i] == 'C')uc++;
		else dp++;
	}
	dpc = dp;
	if (dp % 2 == 1) dpc += 1;
	if (uc > dpc / 2) cout << 'U'; else cmp++;
	if (dp > 0) cout << "DP"; else cmp++;
	if (cmp == 2) cout << 'C';
}