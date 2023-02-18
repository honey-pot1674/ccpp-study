#include <stdio.h>
int main() {
	int score;
	int grade[11] = { 0 };
	for (int i = 0;i<100; i++) {
		scanf("%d", &score);
		if (score == 0) {
			break;
		}
		grade[score / 10]++;
	}
	for (int i = 10; i > -1;i--) {
		if (grade[i] != 0) {
			printf("%d : %d person\n", i * 10, grade[i]);
		}
	}
}