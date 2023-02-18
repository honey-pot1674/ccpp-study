#include <stdio.h>
#include <Windows.h>

int main() {
	FILE* fp = fopen("guide.txt", "a");
	int schnum;
	char name[16] = { 0 };
	char truth[3000] = { 0 };
	printf("테스트\n");	
	printf("번호 입력 (예:11301) : ");
	scanf("%d", &schnum);
	printf("이름 입력 (5자 이내, 예:김xx) : \n");
	gets(name);
	gets(name);

	system("cls");
	printf("내용 입력 (1000자,이내) : \n");
	gets(truth);
	system("cls");
	fprintf(fp, "%d\n", schnum);
	fprintf(fp, "%s\n", name);
	fprintf(fp, "%s\n\n", truth);
	printf("END PROGRAM");
	Sleep(1000);
}