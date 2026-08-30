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
	// finite loop
	// 2) i의 초기값이 5보다 커서 loop에 진입하지 못하는 경우
	int i = 10;
	while (++i < 5) { // false
		printf("Hi\n");
	}

	return 0;
}