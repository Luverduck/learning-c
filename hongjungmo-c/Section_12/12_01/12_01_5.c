// 12.1 메모리 레이아웃 훑어보기
/*
	C 프로그램의 메모리 영역

	5. Stack 영역 (Stack segment)**
	함수의 호출 스택(Call Stack)을 관리하는 영역
	- 함수에 전달되는 매개 변수의 값
	- 반환할 함수의 메모리 주소
	- 함수 내에서 사용하는 지역 변수
*/

#include <stdio.h>

void func() {
	// 함수 func 내부의 지역 변수
	int i = 123;
	printf("%lld\n", (long long)&i);
}

int main(void)
{
	// 함수 func 호출
	func();

	return 0;
}