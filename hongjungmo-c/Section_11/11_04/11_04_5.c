// 11.4 문자열을 입력받는 다양한 방법들

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// 문자열을 저장할 문자 배열의 길이가 작은 경우
	char str[5];

	fgets(str, 5, stdin); // stdin로부터 읽은 문자 4개 + 널 문자를 str에 저장한다.

	fputs(str, stdout);

	return 0;	
}