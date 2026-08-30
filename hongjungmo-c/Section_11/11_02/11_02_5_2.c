// 11.2 메모리 레이아웃과 문자열

#include <stdio.h>
int main(void)
{
	// 문자열의 특징

	// 4. 포인터 산술 연산을 통해 문자열을 출력할 수 있다.

	// 포인터로 선언된 문자열
	const char* ptr_str = "I am a String.";

	// 문자열 출력
	// i) 길이를 아는 경우
	// 1) 배열 역참조 연산
	for (int i = 0; i < 15; ++i) {
		putchar( ptr_str[i] );
	}
	printf("\n");

	// 2) 포인터 산술 연산
	for (int i = 0; i < 15; ++i) {
		putchar( *(ptr_str + i) );
	}
	printf("\n");

	// ii) 길이를 모르는 경우
	while (*ptr_str != '\0') {
		putchar( *(ptr_str++) );
	}

	return 0;
}