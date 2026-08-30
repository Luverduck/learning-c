// 12.6 레지스터 변수
/*
	레지스터 변수 (Register Variable)
	Register Storage Class에 속하는 변수
	- 지속 시간 : automatic
	- 변수 영역 : block
	- 연결 상태 : none
	- 저장 위치 : 레지스터(Register) 또는 스택(Stack)
*/

#include <stdio.h>
int main(void)
{
	// 레지스터 변수의 특징

	// 1. register 키워드로 선언한다. 
	register int r;
	r = 123;

	// 2. 레지스터 변수는 메모리 주소를 알 수 없다.
	//printf("%p\n", &r); // Error

	return 0;
}