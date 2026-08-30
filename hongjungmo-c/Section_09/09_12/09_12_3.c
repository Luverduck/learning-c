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

	// 역참조 연산자 *
	printf("value of variable = %d\n", a);
	printf("value of pointing = %d\n", *a_ptr);

	return 0;
}