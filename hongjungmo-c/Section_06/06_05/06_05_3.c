// 6.5 사실과 거짓
/*
	관계 표현식 (Relational Expression)
	관계 연산자로 나타낸 표현식
	1(true) 또는 0(false)의 값을 갖는다.
*/

#include <stdio.h>
int main(void)
{
	// while문의 루프 탈출 예제 2)
	int i = -5;
	while (i) // i의 값이 0이 될 때 루프 탈출
		printf("%d is true\n", i++); // 루프를 반복할 때마다 i의 값이 1씩 증가

	printf("%d is false\n", i);

	return 0;
}