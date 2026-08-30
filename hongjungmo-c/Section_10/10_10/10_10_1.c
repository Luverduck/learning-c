// 10.10 const와 배열과 포인터
/*
	형 한정자 const
	변수를 상수로 선언하기 위한 예약어로, const가 붙은 변수는 그 값(value)을 바꿀 수 없다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// const로 선언한 변수
	// - 변수의 값을 변경할 수 없다.
	const double PI = 3.14159;
	//PI = 2.14159;

	return 0;
}