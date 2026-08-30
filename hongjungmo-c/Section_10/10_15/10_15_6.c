// 10.15 포인터의 호환성
/*
	포인터의 호환성 관련 내용들은
	문법적으로 허용하는 내용들이지만 권장하지 않는다.
*/

#include <stdio.h>
int main(void)
{
	// 포인터와 const

	// 변수
	int x = 5;
	const int y = 10;

	// 포인터
	int* ptr_x = &x;
	const int* ptr_y = &y;
	// const int* ptr_y 의 경우 : 역참조한 값이 const
	// int* const ptr_y 의 경우 : ptr_y의 값이 const
	// const int* const ptr_y 의 경우 : 역참조한 값이 const이면서 ptr_y의 값도 const

	// const가 아닌 포인터에 const인 포인터 대입
	ptr_x = ptr_y; // ptr_x는 역참조한 값이 const가 아니므로 Warning
	ptr_y = ptr_x; // const int* ptr_y 의 경우 역참조한 값이 const이므로 ptr_y의 값은 바꿀 수 있다.

	return 0;
}