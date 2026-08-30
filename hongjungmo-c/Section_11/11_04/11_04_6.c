// 11.4 문자열을 입력받는 다양한 방법들

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// fgets의 반환값
	char str[5];

	printf("%p\n", str);

	printf("%p\n", fgets(str, 5, stdin));

	return 0;
}