#include <iostream>

#include <stdio.h>
#include <string.h>

int main()
{
	char word[1001]; //�ܾ� �迭 ����
	int i; // ������ �ε��� ����, i ��° ���� 
	scanf("%s", word); // ù°�ٿ� �ܾ� �Է�
	scanf("%d", &i); // ��°�ٿ� �ε��� ���� �Է�
	int size = strlen(word); // word ���ڿ� ���� 
	if (i < size)
		printf("%c", word[i - 1]);
	return 0;
}
