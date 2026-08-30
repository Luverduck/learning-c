// 9.13 포인터의 기본적인 사용 방법

#include <stdio.h>
int main(void)
{
	// 3. 역참조를 통해 변수에 할당된 메모리 공간의 값 직접 변경(2)

	// 변수 선언 및 초기화
	int a;
	a = 123;

	// 포인터의 선언
	int* a_ptr;

	// 포인터에 변수 a의 주소를 저장
	a_ptr = &a;

	// 변경 전 상태 출력
	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	// 역참조를 통해 값 변경
	*a_ptr = 456;

	// 변경 후 상태 출력
	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	// 역참조 값을 새로운 변수에 저장
	int b = *a_ptr;
	printf("%d %p\n", a, &a);
	printf("%d %p\n", b, &b);

	return 0;
}