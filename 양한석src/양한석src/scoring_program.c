#include <stdio.h>
#include <stdlib.h>
int main() {
	int subject, student, n, j, sum = 0, right, ddang;
	printf("�ȳ� : �� ���α׷��� ���ڸ� ������ �Է��ؾ��ϴ� ������ ���� �ֽ��ϴ�. �� �� ���� �ٶ��ϴ�.\n");
	printf("���� �� : ");
	scanf("%d", &subject);
	int* correct;
	int* answer;
	int* score;
	int* wrong;
	for (int i = 1; i <= subject; i++) {
		printf("���� %d�� ������ : ", i);
		scanf("%d", &n);
		correct = malloc(sizeof(int) * n);
		answer = malloc(sizeof(int) * n);
		score = malloc(sizeof(int) * n);
		wrong = malloc(sizeof(int) * n);
		printf("������ ���� 1������ ���ʴ�� �Է��� �ּ���.(�Է¸��� ���⸦ �־��ּ���)\n--> ");
		for (j = 0; j < n; j++) {
			scanf(" %d", &correct[j]);
		}
		printf("������ ���� 1������ ���ʴ�� �Է��� �ּ���.(�Է¸��� ���⸦ �־��ּ���)\n--> ");
		for (j = 0; j < n; j++) {
			scanf(" %d", &score[j]);
		}
		printf("������ �� : ");
		scanf("%d", &student);
		for (j = 1; j <= student; j++) {
			for (int k = 0; k < n; k++) {
				wrong[k] = 0;
			}
			sum = 0;
			right = 0;
			ddang = 0;
			printf("%d�� �������� ���� 1������ ���ʴ�� �Է��� �ּ���.(�Է¸��� ���⸦ �־��ּ���)\n--> ", j);
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
			printf("%d���� %d�� ���û� ������ %d���Դϴ�.\n", i, j, sum);
			printf("�������� : %d��  Ʋ������ : %d��", right, ddang);
			printf("\nƲ������ : ");			
			if (ddang != 0) {
				for (int k = 0; k < ddang - 1; k++) {
					printf("%d��, ", wrong[k]);
				}
				printf("%d��\n", wrong[ddang - 1]);
			}
		}
	}
}