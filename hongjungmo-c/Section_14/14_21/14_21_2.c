// 14.21 함수 포인터의 원리
/*
	함수 포인터 (Function Pointer)
	실행할 수 있는 코드(함수)의 주소를 저장하는 포인터
*/

#include <stdio.h>

// 함수 func
int func(char i)
{
	return i + 1;
};

int main()
{
	// 함수 포인터 선언
	int (*ptr_func)(char) = &func;

	// 함수 포인터가 가리키는 함수 실행
	int ret_val = (*ptr_func)('A');

	printf("%d\n", ret_val);

	return 0;
};