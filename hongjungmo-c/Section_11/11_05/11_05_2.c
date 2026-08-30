// 11.5 문자열을 출력하는 다양한 방법들

#include <stdio.h>
int main(void)
{
	// puts 함수는 널 문자 \0를 발견할 때까지 인수로 입력된 주소의 문자열을 읽는다.
	char str[] = "String array initialized";
	const char* ptr = "A pointer initialized";

	puts(&str[3]);

	puts(ptr + 3);

	return 0;
}