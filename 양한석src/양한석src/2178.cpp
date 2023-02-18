#include <iostream>
#include <queue>
using namespace std;

bool visit[100][100] = { false, };
queue<int>qf,qs;
char maz[100][100];
int n, m;

int bfs(int par,int size) {
	int f, s;
	for (int i = 0; i < size; i++) {
		f = qf.front();
		s = qs.front();
		if (f + 1 < n && maz[f + 1][s] == '1' && visit[f + 1][s] == false) {
			qf.push(f + 1);
			qs.push(s);
			visit[f + 1][s] = true;
		}
		if (f - 1 >= 0 && maz[f - 1][s] == '1' && visit[f - 1][s] == false) {
			qf.push(f - 1);
			qs.push(s);
			visit[f - 1][s] = true;
		}
		if (s + 1 < m && maz[f][s + 1] == '1' && visit[f][s + 1] == false) {
			qf.push(f);
			qs.push(s + 1);
			visit[f][s + 1] = true;
		}
		if (s - 1 >= 0 && maz[f][s - 1] == '1' && visit[f][s - 1] == false) {
			qf.push(f);
			qs.push(s - 1);
			visit[f][s - 1] = true;
		}
		qf.pop(); qs.pop();
	}
	for (int i = 0, j = qf.size(); i < j; i++) {
		f = qf.front();
		s = qs.front();
		if (f == n - 1 && s == m - 1) return par + 2;
		qf.push(qf.front()); qs.push(qs.front());
		qf.pop(); qs.pop();
	}
	return bfs(par + 1, qf.size());
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> maz[i];
	}
	qf.push(0); qs.push(0);
	visit[0][0] = true;
	cout<<bfs(0, qf.size());
}