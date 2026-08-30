// 9.13 포인터의 기본적인 사용 방법

#include <stdio.h>
int main(void)
{
	// 1. 포인터의 선언

	// 변수 선언 및 초기화
	int a;
	a = 123;

	// 포인터의 선언
	int* a_ptr;

	// 포인터에 변수 a의 주소를 저장
	a_ptr = &a;

	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	return 0;
}