// 12.11 함수의 저장 공간 분류
/*
	함수의 저장 클래스
	- Static with external linkage (Default)
	- Static with internal linkage

	외부 연결 함수 (external function)
	Static with external linkage Class에 속하는 함수
	- 지속 시간 : static
	- 변수 영역 : file
	- 연결 상태 : external
	- 저장 위치 : 데이터 영역 또는 BSS 영역

	내부 연결 함수 (static function)
	Static with internal linkage Class에 속하는 변수
	- 지속 시간 : static
	- 변수 영역 : file
	- 연결 상태 : internal
	- 저장 위치 : 데이터 영역 또는 BSS 영역
*/

#include <stdio.h>

// 외부 연결 함수의 선언
void func_external()
{
	printf("external\n");
};

// 내부 연결 함수의 선언
static void func_static()
{
	printf("external\n");
};

int main(void)
{
	func();

	return 0;
}