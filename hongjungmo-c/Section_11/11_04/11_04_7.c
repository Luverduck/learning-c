// 11.4 문자열을 입력받는 다양한 방법들

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// 반복문을 이용하여 입력 버퍼의 모든 값을 출력
	char str[5];

	while (fgets(str, 5, stdin) != NULL && str[0] != '\n') 
	{
		fputs(str, stdout);
	}

	return 0;
}