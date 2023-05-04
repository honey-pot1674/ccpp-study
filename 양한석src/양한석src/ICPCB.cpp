#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	string obj[3][3][3][3];
	vector<string>part, middle;
	int checky[8] = { 0,0,0,1,1,2,2,2 }, checkx[8] = { 0,1,2,0,2,0,1,2 };
	for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) for (int k = 0; k < 3; k++) for (int l = 0; l < 3; l++) cin >> obj[i][k][j][l];
	for (int i = 0; i < 8; i++) middle.push_back(obj[1][1][checky[i]][checkx[i]]);
	sort(middle.begin(), middle.end(), less<>());
	for (int i = 0; i < 8; i++) {
		part.clear();
		for (int j = 0; j < 8; j++) {
			if (obj[checky[j]][checkx[j]][1][1] == middle[i]) {
				for (int k = 0; k < 8; k++) part.push_back(obj[checky[j]][checkx[j]][checky[k]][checkx[k]]);
				sort(part.begin(), part.end(), less<>());
				cout << '#' << i + 1 << ". " << obj[checky[j]][checkx[j]][1][1] << '\n';
				for (int k = 0; k < 8; k++) cout << '#' << i + 1 << '-' << k+1 << ". " << part[k] << '\n';
			}
		}
	}
}