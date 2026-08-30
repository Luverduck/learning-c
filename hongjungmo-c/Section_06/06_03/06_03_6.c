// 6.3 진입 조건 루프 while
/*
	while문의 구조
	while ( expression ) {
		statement
	}
*/

#include <stdio.h>
int main(void)
{
	// common mistake
	// 2) 조건문 바로 뒤의 세미콜론(;)에 의해 statement가 실행되지 않는 경우
	int i = 0;
	while (i++ < 3); // null statement
		printf("%d\n", i);

	return 0;
}