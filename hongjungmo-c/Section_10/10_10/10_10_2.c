// 10.10 const와 배열과 포인터
/*
	형 한정자 const
	변수를 상수로 선언하기 위한 예약어로, const가 붙은 변수는 그 값(value)을 바꿀 수 없다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// const로 선언한 배열
	// - 배열 요소의 값을 변경할 수 없다. (단, 포인터를 이용할 경우 배열 요소의 값을 변경할 수 있다.)
	const int arr[] = { 1, 2, 3 };
	//arr[2] = 4; // 불가능

	int* ptr = arr;
	*ptr = 9;     // 가능
	ptr[2] = 4;   // 가능

	printf("%d %d %d", arr[0], arr[1], arr[2]); // 결과 : 9 2 4

	return 0;
}