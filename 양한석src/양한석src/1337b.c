#include <stdio.h>

int main() {
    int n;
    int cnt = 0;
    scanf("%d", &n);
    int arr[100][100] = { {0} };
    int i, j;
    int x = -1, y = -1;
    int num = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            arr[i][j] = 32;
        }

    }

    for (; n - cnt > 0;) {

        for (j = 0; j < n - cnt; j++) {
            arr[++y][++x] = (num++) % 10;
        }
        cnt++;

        for (j = 0; j < n - cnt; j++) {
            arr[y][--x] = (num++) % 10;
        }
        cnt++;

        for (j = 0; j < n - cnt; j++) {
            arr[--y][x] = (num++) % 10;
        }
        cnt++;
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (arr[i][j] != 32)
                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
