#include <iostream>
#include <map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m, sor;
	string srh, ipt;
	map<int, string>dic;
	map<string, int>dic2;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		ipt.clear();
		cin >> ipt;
		dic.insert({ i + 1,ipt });
		dic2.insert({ ipt,i + 1 });
	}
	for (int i = 0; i < m; i++) {
		ipt.clear(); sor = 0;
		cin >> ipt;
		if (ipt[0] < 'A') {
			for (int j = 0, k = ipt.size(); j < k; j++) {
				sor *= 10;
				sor += ipt[j] - 48;
				ipt[j] = 0;
			}
			auto idx = dic.find(sor);
			cout << idx->second << '\n';
		}
		else {
			auto idx = dic2.find(ipt);
			cout << idx->second << '\n';
		}
	}
}