// 9.6 재귀 호출
/*
	재귀 호출 (recursive call)
	함수 내부에서 함수가 자기 자신을 호출하는 행위
	재귀 호출이 포함된 함수를 재귀 함수(recursion function)라 한다.
	재귀 호출 시, 종료 조건을 명시하지 않으면 스택이 모두 채워질 때까지 호출을 반복한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int my_func(int);

int main(void)
{
	my_func(1);

	return 0;
}

int my_func(int n)
{
	// 현재 호출 Level과 n의 주소를 출력
	printf("Level %d, address of variable n = %p\n", n, &n);

	// 재귀 호출의 종료 조건을 명시
	if (n <= 4)
	{
		// n을 증가시켜 재귀 호출
		my_func(n + 1);
	}
};