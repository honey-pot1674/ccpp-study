#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int>dg;
int bfs(int l,int sc,vector<bool>const &pass) {
	int sm=sc, sp=sc;
	bool ap = true;
	vector<bool>passb(pass);
	if (l >= 1) {
		if (!passb[l - 1])sm += dg[l - 1];
		passb[l-1] = true;
	}
	if (l < passb.size()-1) {
		if (!passb[l + 1])sp += dg[l + 1];
		passb[l+1] = true;
	}

	for (int i = 0; i < passb.size(); i++) if (!passb[i]) ap = false;

	if (ap)return -1;

	if (sm >= 0) {
		sm=max(bfs(l - 1, sm, passb),sm);
	}
	if (sp >= 0) {
		sp=max(bfs(l + 1, sp, passb),sp);
	}
	return max(sc, max(sm, sp));
}
int main() {
	int n, s, ipt;
	cin >> n >> s;
	vector<bool>pass;
	for (int i = 0; i < n; i++) {
		cin >> ipt;
		dg.push_back(ipt);
		pass.push_back(false);
	}
	pass[s - 1] = true;
	cout << bfs(s - 1, 0,pass);
}