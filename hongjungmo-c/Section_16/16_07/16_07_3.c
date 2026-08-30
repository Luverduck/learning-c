// 16.7 조건에 따라 다르게 컴파일하기
/*
	전처리 지시자 #if, #elif, #else, #endif
	조건에 따라 서로 다른 전처리를 정의한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define TYPE 1

#if TYPE == 1
#include "my_function_1.h"
#elif TYPE == 2
#include "my_function_2.h"
#else
static void my_function()
{
	printf("Wrong compile option!\n");
}
#endif

int main()
{
	my_function();

	return 0;
};