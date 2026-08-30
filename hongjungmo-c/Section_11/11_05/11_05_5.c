// 11.5 문자열을 출력하는 다양한 방법들

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// scanf 함수는 공백을 발견하거나 정해진 갯수의 문자열만을 읽는다.
	char input[100] = "";

	// input : "Just do it, do it!\n"
	// 입력 버퍼에서 공백 전까지의 문자열 "Just"를 읽고 input에 저장한다.
	int result = scanf("%10s", input);
	printf("%s\n", input); // 결과 : Just

	// 입력 버퍼에서 1개의 문자열 "d"를 읽고 input에 저장한다.
	result = scanf("%1s", input);
	printf("%s\n", input);

	return 0;
}