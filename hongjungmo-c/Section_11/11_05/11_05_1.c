// 11.5 문자열을 출력하는 다양한 방법들

#include <stdio.h>
int main(void)
{
	// puts 함수는 출력 문자열에 개행 문자가 포함되어 있다.
	char str[] = "Just do it, do it!";
	puts(str);
	printf("%s\n", str);

	return 0;
}