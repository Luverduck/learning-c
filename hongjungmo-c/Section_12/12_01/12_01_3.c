// 12.1 메모리 레이아웃 훑어보기
/*
	C 프로그램의 메모리 영역

	3. BSS 영역 (Block Started by Symbol segment)**
	초기화되지 않은 정적 변수를 저장하는 영역
	- 0으로 초기화 되었거나 명시적으로 초기화하지 않은 전역 변수 / 지역 정적 변수
*/

#include <stdio.h>

// 초기화되지 않은 전역 변수
int var_global_uninitialized;

int main(void)
{
	// 초기화되지 않은 전역 변수
	printf("%lld\n", (long long)&var_global_uninitialized);

	return 0;
}