// 12.1 메모리 레이아웃 훑어보기
/*
	C 프로그램의 메모리 영역

	2. Data 영역 (Data segment)**
	초기화된 정적 변수를 저장하는 영역
	- 명시적으로 초기화된 전역 변수 / 지역 정적 변수
*/

#include <stdio.h>

// 초기화된 전역 변수
int var_global_initialized = 1024;

void func() 
{
	// 정적 지역 변수
	static int var_func_local_static = 456;
	printf("%lld\n", (long long)&var_func_local_static);
}

int main(void)
{
	// 초기화된 전역 변수
	printf("%lld\n", (long long)&var_global_initialized);

	// 정적 지역 변수
	static int var_main_local_static = 789;
	printf("%lld\n", (long long)&var_main_local_static);

	// 지역 변수와 정적 지역 변수
	func();

	return 0;
}