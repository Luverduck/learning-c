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
	int x = 5;
	int y = 10;

	// 포인터
	int* ptr_x = &x;
	int* ptr_y = &y;

	// 이중 포인터
	const int** dptr = &ptr_x;
	// const int** dptr 의 경우 : 역참조한 값이 const
	// int** const dptr 의 경우 : dptr의 값이 const
	// const int** const dptr 의 경우 : 역참조한 값이 const이면서 dptr의 값도 const

	// const인 이중 포인터의 값 변경
	*dptr = ptr_y;
	dptr = &ptr_x; // const int** dptr 의 경우 역참조한 값이 const이며 dptr의 값은 바꿀 수 있다.

	return 0;
}