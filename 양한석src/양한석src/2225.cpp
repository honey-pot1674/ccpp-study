#include <iostream>
#include <algorithm>
using namespace std;
int arr[201][201] = { {0} };
void cop() {
    for (int i = 1; i <= 200; i++) {
        arr[i][1] = i;
        arr[1][i] = 1;
    }
    for (int i = 2; i <= 200; i++) {
        for (int j = 2; j <= 200; j++) {
            arr[i][j] = (arr[i][j - 1] + arr[i - 1][j]) % 1000000000;
        }
    }
    return;
}
int main() {
    cop();
    int n, k;
    cin >> n >> k;
    cout << arr[k][n];
    return 0;
}