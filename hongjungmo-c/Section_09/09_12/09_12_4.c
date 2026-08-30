// 9.12 포인터의 작동 원리
/*
	포인터(pointer)
	메모리의 주소를 저장할 수 있는 자료형

	주소 연산자 &
	변수에 할당된 메모리 공간의 시작 주소를 반환한다.

	역참조 연산자 *
	포인터에 저장된 주소로 메모리 공간에 접근한다.
	주소를 통해 메모리 공간에 접근하는 것을
	역참조(dereferencing), 간접 참조(indirection) 또는 방향 재지정(redirection)이라 부른다.
*/

#include <stdio.h>
int main(void)
{
	int a = 7;

	// 포인터의 선언
	int* a_ptr;

	// 포인터에 변수 a의 주소를 저장
	a_ptr = &a;

	// [추가] 역참조 연산자를 이용하여 메모리에 저장된 값을 직접 변경
	// 변경 전 변수에 할당된 메모리의 주소와 해당 메모리에 저장된 값
	printf("before value of variable address = %p\n", a_ptr);
	printf("before value of variable = %d\n", a);

	// 변수에 할당된 메모리에 저장된 값 변경
	*a_ptr = 9;

	// 변경 후 변수에 할당된 메모리의 주소와 해당 메모리에 저장된 값
	printf("after value of variable address = %p\n", a_ptr);
	printf("after value of variable = %d\n", a);

	return 0;
}