// 10.15 포인터의 호환성
/*
	포인터의 호환성 관련 내용들은
	문법적으로 허용하는 내용들이지만 권장하지 않는다.
*/

#include <stdio.h>
int main(void)
{
	// 이중 포인터와 const

	// 변수
	const int x = 5;

	// 포인터
	int* ptr_x;

	// 이중 포인터
	const int** dptr = &ptr_x;

	// 이중 포인터를 역참조한 메모리에 const인 변수의 주소 대입
	*dptr = &x; // undefined

	// 포인터를 역참조한 메모리의 값 변경
	*ptr_x = 10;

	return 0;
}