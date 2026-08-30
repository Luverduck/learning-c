// 11.5 문자열을 출력하는 다양한 방법들

#include <stdio.h>
int main(void)
{
	// 널 문자가 없을 경우 컴파일 경고 발생
	char str[] = { 'H', 'i', '!' };

	// 대부분의 경우 인수로 입력된 주소부터 널 문자를 찾을 때까지 값을 읽도록 구현
	puts(str);

	return 0;
}