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
	// 1) loop를 실행할 때마다 i값이 1씩 증가하여 5가 되었을 때 loop를 탈출하는 경우
	int i = 1;
	while (i < 5) { // false
		printf("i before = %d\n", i);
		i++;
		printf("i after = %d\n\n", i);
	}

	return 0;
}