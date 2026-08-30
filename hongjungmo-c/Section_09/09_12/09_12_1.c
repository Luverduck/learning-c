// 9.12 포인터의 작동 원리
/*
	포인터(pointer)
	메모리의 주소를 저장할 수 있는 자료형

	포인터의 선언
	[가리키는 값의 자료형]* [포인터명];
	int* a_ptr;
*/

#include <stdio.h>
int main(void)
{
	// 포인터의 선언
	int* a_ptr;

	// 포인터에 변수의 주소 저장
	int a = 7;
	a_ptr = &a; // 주소 연산자 &는 변수에 할당된 메모리 공간의 시작 주소를 반환한다.
	printf("value of variable = %d\n", a);
	printf("address of variable = %p\n", &a);
	printf("value of pointer = %p\n", a_ptr);

	return 0;
}