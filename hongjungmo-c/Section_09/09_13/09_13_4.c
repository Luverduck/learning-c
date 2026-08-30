// 9.13 포인터의 기본적인 사용 방법

#include <stdio.h>
int main(void)
{
	// 4. 변수 재선언시 포인터의 간접 참조값

	// 변수 선언 및 초기화
	int a;
	a = 123;

	// 포인터의 선언
	int* a_ptr;

	// 포인터에 변수 a의 주소를 저장
	a_ptr = &a;

	// 변경 전 상태 출력
	printf("%d %p %p\n", a, &a, a_ptr);

	a = 456;

	// 변경 후 상태 출력
	printf("%d %p %p\n", a, &a, a_ptr);

	return 0;
}