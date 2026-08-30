// 14.21 함수 포인터의 원리
/*
	함수 포인터 (Function Pointer)
	실행할 수 있는 코드(함수)의 주소를 저장하는 포인터
*/

#include <stdio.h>

// 함수 func1
void func1() 
{
	return 0;
};

// 함수 func2
int func2(char i)
{
	return i + 1;
};

int main(void)
{
	// 함수 func1에 대한 함수 포인터
	void (*ptr_func1)() = &func1;

	// 함수 func2에 대한 함수 포인터
	int (*ptr_func2)(char) = &func2;

	return 0;
}