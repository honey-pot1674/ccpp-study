#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<long long>arr;
vector<long long>tree;

int init(int stt, int end, int node) {
	if (stt == end) {
		return tree[node]=arr[stt];
	}
	int mid = (stt + end) / 2;
	return tree[node] = init(stt, mid, node * 2) + init(mid + 1, end, node * 2 + 1);
}

int sum(int stt, int end, int node, int left, int right) {
	if (left > end || right < stt) {
		return 0;
	}
	else if (left <= stt && end <= right) {
		return tree[node];
	}
	int mid = (stt + end) / 2;
	return sum(stt, mid, node * 2, left, right) + sum(mid + 1, end, node * 2 + 1, left, right);
}

void update(int stt, int end, int node, int index, long long dif) {
	if (index<stt || index>end) return;
	tree[node] += dif;
	if (stt == end) return;
	int mid = (stt + end) / 2;
	update(stt, mid, node * 2, index, dif);
	update(mid + 1, end, node * 2 + 1, index, dif);
}

int main() {
	int n, a;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		arr.push_back(a);
	}
	tree.resize((n * 4) + 1);
	init(0, n - 1, 1);

}