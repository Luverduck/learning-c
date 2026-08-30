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
	// infinite loop
	// 1) i값의 변화가 없어서 loop를 탈출하지 못하는 경우
	int i = 1;
	while (i < 5) { // true
		printf("Hi!\n");
	}
	return 0;
}