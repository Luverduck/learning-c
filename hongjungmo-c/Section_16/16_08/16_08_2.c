// 16.8 미리 정의된 매크로들, #line, #error
/*
	미리 정의된 매크로들
	__FILE__ 	전처리를 실행한 소스 파일의 이름(경로)
	__DATE__	전처리를 실행한 일자
	__TIME__	전처리를 실행한 시간
	__LINE__	전처리를 실행한 행 번호
	__func__	전처리를 실행한 함수의 이름
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "DifferentFile.h"

void different_function();

int main(void)
{
	different_function();
	different_function_in_different_file();

	return 0;
}

void different_function()
{
	printf("This function is %s\n", __func__);
	// 결과 : different_function
	printf("This line is %d\n", __LINE__);
	// 결과 : 30
};