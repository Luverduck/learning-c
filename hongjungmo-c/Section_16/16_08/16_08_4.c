// 16.8 미리 정의된 매크로들, #line, #error
/*
	전처리 지시문 #error
	직접 컴파일 에러를 발생시키고 에러 메시지를 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
#if __LINE__ != 10
#error 행 번호가 10이 아닙니다.
#endif

	return 0;
}