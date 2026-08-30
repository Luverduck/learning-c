// 12.1 메모리 레이아웃 훑어보기
/*
	C 프로그램의 메모리 영역

	1. Code 영역 (Code segment)**
	실행 가능한 프로그램 코드를 저장하는 영역
*/

#include <stdio.h>

// Code 영역에 저장된 func 함수
void func() 
{
	int i = 123; // 함수 func 호출 시 Stack 영역에 저장되는 변수
}

// Code 영역에 저장된 main 함수
int main(void)
{
	// 문자열 "Banana"의 주소
	const char* message = "Banana";

	// 함수 func의 주소
	void (*ptr_func)() = func; 

	// Code 영역에 저장된 문자열의 주소
	printf("%lld\n", (long long)message);

	// Code 영역에 저장된 func 함수의 주소
	printf("%lld\n", (long long)ptr_func);

	// Code 영역에 저장된 main 함수의 주소
	printf("%lld\n", (long long)main);

	return 0;
}