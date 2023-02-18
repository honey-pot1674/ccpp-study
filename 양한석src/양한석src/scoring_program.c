#include <stdio.h>
#include <stdlib.h>
int main() {
	int subject, student, n, j, sum = 0, right, ddang;
	printf("안내 : 본 프로그램은 숫자를 일일이 입력해야하는 불편한 점이 있습니다. 이 점 양해 바랍니다.\n");
	printf("과목 수 : ");
	scanf("%d", &subject);
	int* correct;
	int* answer;
	int* score;
	int* wrong;
	for (int i = 1; i <= subject; i++) {
		printf("과목 %d번 문제수 : ", i);
		scanf("%d", &n);
		correct = malloc(sizeof(int) * n);
		answer = malloc(sizeof(int) * n);
		score = malloc(sizeof(int) * n);
		wrong = malloc(sizeof(int) * n);
		printf("정답을 문제 1번부터 차례대로 입력해 주세요.(입력마다 띄어쓰기를 넣어주세요)\n--> ");
		for (j = 0; j < n; j++) {
			scanf(" %d", &correct[j]);
		}
		printf("점수를 문제 1번부터 차례대로 입력해 주세요.(입력마다 띄어쓰기를 넣어주세요)\n--> ");
		for (j = 0; j < n; j++) {
			scanf(" %d", &score[j]);
		}
		printf("응시자 수 : ");
		scanf("%d", &student);
		for (j = 1; j <= student; j++) {
			for (int k = 0; k < n; k++) {
				wrong[k] = 0;
			}
			sum = 0;
			right = 0;
			ddang = 0;
			printf("%d번 응시자의 답을 1번부터 차례대로 입력해 주세요.(입력마다 띄어쓰기를 넣어주세요)\n--> ", j);
			for (int k = 0; k < n; k++) {
				scanf(" %d", &answer[k]);
			}
			for (int k = 0; k < n; k++) {
				if (answer[k] == correct[k]) {
					sum += score[k];
					++right;
				}
				else {
					wrong[ddang++] = k + 1;
				}
			}
			printf("%d과목 %d번 응시생 점수는 %d점입니다.\n", i, j, sum);
			printf("맞은개수 : %d개  틀린개수 : %d개", right, ddang);
			printf("\n틀린문항 : ");			
			if (ddang != 0) {
				for (int k = 0; k < ddang - 1; k++) {
					printf("%d번, ", wrong[k]);
				}
				printf("%d번\n", wrong[ddang - 1]);
			}
		}
	}
}