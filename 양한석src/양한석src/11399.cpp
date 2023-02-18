#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, ipt, sum = 0, ts = 0;
	priority_queue<int,vector<int>,greater<>>q;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ipt;
		q.push(ipt);
	}
	for (; q.size();) {
		sum += q.top();
		q.pop();
		ts += sum;
	}
	cout << ts;
}