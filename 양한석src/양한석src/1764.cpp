#include <iostream>
#include <map>
#include <queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m, sor;
	string srh, ipt;
	map<string, int>dic;
	priority_queue<string,vector<string>,greater<>>q;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		ipt.clear();
		cin >> ipt;
		dic.insert({ ipt, i + 1 });
	}
	for (int i = 0; i < m; i++) {
		cin >> srh;
		if (dic.find(srh) != dic.end()) {
			q.push(srh);
		}
	}
	cout << q.size() << '\n';
	for (; !q.empty();) {
		cout << q.top() <<'\n';
		q.pop();
	}
}