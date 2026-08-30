// 16.7 조건에 따라 다르게 컴파일하기
/*
	전처리 지시자 #pragma once
	헤더 파일의 중복 include를 방지한다.
*/

#include "Header_A.h"
#include "Header_B.h"

int main()
{
	test_function_A();
	test_function_B();

	return 0;
};