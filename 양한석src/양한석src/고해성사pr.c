#include <stdio.h>
#include <Windows.h>

int main() {
	FILE* fp = fopen("guide.txt", "a");
	int schnum;
	char name[16] = { 0 };
	char truth[3000] = { 0 };
	printf("�׽�Ʈ\n");	
	printf("��ȣ �Է� (��:11301) : ");
	scanf("%d", &schnum);
	printf("�̸� �Է� (5�� �̳�, ��:��xx) : \n");
	gets(name);
	gets(name);

	system("cls");
	printf("���� �Է� (1000��,�̳�) : \n");
	gets(truth);
	system("cls");
	fprintf(fp, "%d\n", schnum);
	fprintf(fp, "%s\n", name);
	fprintf(fp, "%s\n\n", truth);
	printf("END PROGRAM");
	Sleep(1000);
}