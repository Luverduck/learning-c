// 11.4 문자열을 입력받는 다양한 방법들

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// 형식 지정자로 scanf의 입력 문자열 갯수 조정
	char str_1[5], str_2[7];

	int count = scanf("%4s %6s", str_1, str_2);
	//int count = scanf("%6s %6s", str_1, str_2); // run-time error

	printf("%s | %s\n", str_1, str_2);

	return 0;
}