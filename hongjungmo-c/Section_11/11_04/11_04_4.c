// 11.4 문자열을 입력받는 다양한 방법들

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// fgets 함수로 입력받은 문자열에서 개행 문자 '\n'를 널 문자 '\0'로 치환
	char str[100];

	fgets(str, 100, stdin);

	int i = 0;
	while (str[i] != '\n' && str[i] != '\0') 
	{
		if (str[i] == '\n') {
			str[i] = '\0';
		}
		i++;
	}
	
	fputs(str, stdout);

	return 0;
}