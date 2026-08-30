// 12.3 변수의 영역과 연결 상태, 객체의 지속 시간
/*
	변수의 영역 (variable scope, visibility)
	식별자의 유효 범위

	블록 스코프 (block scope)
	변수의 영역이 블록 내부인 경우
	- 중괄호 내부에 선언된 변수

	함수 스코프 (function scope)
	변수의 영역이 함수의 블록 내부인 경우
	- 함수의 내부에 선언된 변수 및 함수의 인수

	함수 원형 스코프 (function prototype scope)
	변수의 영역이 함수 원형의 표현식인 경우
	- 함수 원형의 인수

	파일 스코프 (file scope)
	변수의 영역이 파일인 경우
	- 모든 함수의 외부에 선언된 변수
*/

#include <stdio.h>

int var_global = 10;          // 변수 var_global은 파일 스코프를 가진다.

// 함수 원형
void func(int var_arg);       // 변수 var_arg는 함수 원형 스코프를 가진다.

// 메인 함수
int main()
{
	int var_local_main = 12;    // 변수 var_local_main은 메인 함수 스코프를 가진다.

	{ // [블록 시작]
		int var_local_block = 45; // 변수 var_local_block은 블록 스코프를 가진다.
	}	// [블록 끝]

	for (int i = 0; i < 10; ++i) // 변수 i는 for문의 블록 스코프를 가진다.
	{
		int var_local_for = 2;    // 변수 var_local_for는 for문의 블록 스코프를 가진다.
	};

	return 0;
};

// 함수 정의
void func(int var_arg)        // 변수 var_arg는 func 함수 스코프를 가진다.
{
	int var_local_func = 51;    // 변수 var_local_func는 func 함수 스코프를 가진다.
	// ...
};