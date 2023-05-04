#include <iostream>

#include <stdio.h>
#include <string.h>

int main()
{
	char word[1001]; //단어 배열 생성
	int i; // 추출할 인덱스 정수, i 번째 글자 
	scanf("%s", word); // 첫째줄에 단어 입력
	scanf("%d", &i); // 둘째줄에 인덱스 정수 입력
	int size = strlen(word); // word 문자열 길이 
	if (i < size)
		printf("%c", word[i - 1]);
	return 0;
}
