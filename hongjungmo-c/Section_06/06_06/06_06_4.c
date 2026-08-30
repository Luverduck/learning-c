// 6.6 _Bool 자료형
/*
	_Bool
	참과 거짓을 나타내는 논리 자료형
	1(true)와 0(false)의 값을 갖는다
*/

#include <stdio.h>
#include <stdbool.h> 
// bool 자료형

int main(void)
{
	// stdbool.h에 bool의 값으로 true(1), false(0)이 정의되어 있다.
	bool bool_true = true;
	bool bool_false = false;

	printf("True is \t: %d\n", bool_true);
	printf("False is \t: %d\n", bool_false);

	return 0;
}