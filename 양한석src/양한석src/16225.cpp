#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#define MAX 200001
using namespace std;
vector<pair<int, int>> qst;
priority_queue<int> qstp;
int arr[MAX], brr[MAX];
bool D(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}
int main() {
	ios::sync_with_stdio(false);
	int n;
	long long mx;
	int a, b;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 0; i < n; i++) cin >> brr[i];
	for (int i = 0; i < n; i++) qst.push_back({ arr[i],brr[i] });
	sort(qst.begin(), qst.end(), D);
	mx = qst[0].first;
	for (int i = 1; i < n / 2; i++) {
		qstp.push(qst[2 * i - 1].first);
		qstp.push(qst[2 * i].first);
		mx += qstp.top();
		qstp.pop();
	}
	cout << mx;
	return 0;
}