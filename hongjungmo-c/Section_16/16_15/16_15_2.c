// 16.15 assert 라이브러리
/*
	assert.h
	C 언어의 표준 라이브러리로, assert 매크로를 포함하는 헤더 파일

	_Static_assert
	컴파일 타임에 assert를 검증한다.
	_Static_assert ( expression , message );
	- expression : assert 할 표현식
	- message : assert에 실패할 경우 메시지
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <limits.h>

_Static_assert(CHAR_BIT == 9, "9-bit char assumed");

int main(void)
{

	return 0;
}