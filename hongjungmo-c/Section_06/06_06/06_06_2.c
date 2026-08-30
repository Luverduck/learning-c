// 6.6 _Bool 자료형
/*
	_Bool
	참과 거짓을 나타내는 논리 자료형
	1(true)와 0(false)의 값을 갖는다
*/

#include <stdio.h>
int main(void)
{
	// _Bool의 값 출력
	_Bool true_value = 2 < 3;
	_Bool false_value = 2 > 3;

	printf("True is \t: %d\n", true_value); // 결과 : True is : 1
	printf("False is \t: %d\n", false_value); // 결과 : False is : 0

	return 0;
}