// 8.3 입출력 방향 재지정

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// 입력 방향을 CMD 콘솔에서 텍스트 파일(.txt)로 재지정
	char str[100];
	scanf("%s", str);
	printf("I love %s\n", str);

	return 0;
}