#include <iostream>
#include <stack>
using namespace std;
int main() {
	int n, i, cnt = 0;
	stack<int> s;

	string str="";

	cin >> n;
	int* arr = new int[n];
	for (i = 0; i < n; i++) cin >> arr[i];

	for (i = 1; i <= n; i++) {

		s.push(i);
		str +="+\n";

		while (!s.empty() && s.top() == arr[cnt]) {
			s.pop();
			cnt++;
			str += "-\n";
		}

	}

	if (s.empty()) cout << str;
	else cout << "NO";

	delete[] arr;
	return 0;
}