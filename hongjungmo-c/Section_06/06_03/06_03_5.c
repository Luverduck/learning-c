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
	// 1) 중괄호 부재에 의한 무한 루프
	int i = 0;
	while (i < 3)
		printf("%d\n", i);
		i++;

	return 0;
}