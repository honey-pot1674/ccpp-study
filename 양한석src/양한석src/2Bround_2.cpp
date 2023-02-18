#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
vector<int>d;
long long a, b;
void dset(int place, int cnt) {
	if (d.size()-1 < place || place < 1) {
		return;
	}
	if (((d[place] != 0)&&(min(d[place],cnt+1) == cnt+1))||d[place]==0) {
		d[place] = cnt + 1;
	}
	else {
		return;
	}
	if (place == a) {
		return;
	}
	if (place + 1 - a == 0) {
		dset(place + 1, cnt + 1);
	}
	else if (place - 1 - a == 0) {
		dset(place - 1, cnt + 1);
	}
	else if (place * place - a == 0) {
		dset(place * place, cnt + 1);
	}
	else if (place - a * a == 0) {
		dset(sqrt(place), cnt + 1);
	}
	else {
		if (sqrt(place) == (int)sqrt(place)) {
			dset(sqrt(place), cnt + 1);
		}
		dset(place * place, cnt + 1);
		dset(place + 1, cnt + 1);
		dset(place - 1, cnt + 1);
	}
	
	return;
}
int main() {
	int q;	
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> a >> b;
		d.clear();
		d.resize((a > b ? a * a : b * b)+1, 0);
		dset(b, 0);
		cout << d[a]-1 << '\n';
	}
}