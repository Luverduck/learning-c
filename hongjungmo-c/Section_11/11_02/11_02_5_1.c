// 11.2 메모리 레이아웃과 문자열

#include <stdio.h>
int main(void)
{
	// 문자열의 특징

	// 4. 포인터 산술 연산을 통해 문자열을 출력할 수 있다.
	
	// 배열로 선언된 문자열
	char str[] = "I am a String.";

	// 문자열 출력
	// 1) 배열 역참조 연산
	for (int i = 0; i < sizeof(str); ++i) {
		putchar( str[i] );
	}
	printf("\n");

	// 2) 포인터 산술 연산
	for (int i = 0; i < sizeof(str); ++i) {
		putchar( *(str + i) );
	}
	printf("\n");

	return 0;
}