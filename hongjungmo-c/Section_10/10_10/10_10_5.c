// 10.10 const와 배열과 포인터
/*
	형 한정자 const
	변수를 상수로 선언하기 위한 예약어로, const가 붙은 변수는 그 값(value)을 바꿀 수 없다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// const로 선언한 포인터
	const int arr[] = { 1, 2, 3 };

	// ii) 포인터형과 포인터명 앞에 const를 붙이는 경우
	const int* const ptr_ii = arr;

	// - 포인터가 가리키는 메모리의 값을 변경할 수 없다. (역참조를 통한 값 변경 불가능)
	// *ptr_ii = 9; // 불가능
	// ptr_ii[2] = 4; // 불가능

	// - 포인터에 저장된 주소값을 변경할 수 없다.
	//ptr_ii++; // 불가능
	//ptr_ii = ptr_ii + 1; // 불가능

	return 0;
}