// 6.5 사실과 거짓
/*
	관계 표현식 (Relational Expression)
	관계 연산자로 나타낸 표현식
	1(true) 또는 0(false)의 값을 갖는다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// while문의 무한 루프
	int i = 0;
	while (1) // 조건 표현식의 값이 1(true)이므로 루프를 무한히 반복한다.
	{
		printf("Input : ");
		scanf("%d", &i);
	}

	return 0;
}