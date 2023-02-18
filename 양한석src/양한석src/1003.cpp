#include <iostream>
using namespace std;
int one[41] = { 0 };
int nul[41] = { 0 };
void fibonacci() {
    one[0] = 0;
    nul[0] = 1;
    int tmp;
    for (int i = 1; i <= 40; i++) {
        tmp = one[i - 1] + nul[i - 1];
        nul[i] = one[i - 1];
        one[i] = tmp;
    }
    return;
}
int main() {
    fibonacci();
    int n, ipt;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ipt;
        cout << nul[ipt] << ' ' << one[ipt] << '\n';
    }
}