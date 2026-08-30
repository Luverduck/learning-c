//#pragma once

#ifndef HEADER_A
#define HEADER_A

#include <stdio.h>


static void test_function_A()
{
	printf("Hello, Header_A.h\n");
};

#endif

// Header_A.h가 #include 될 때 HEADER_A라는 매크로가 존재하지 않는다면 새로 정의한다.
// 만약 HEADER_A가 존재할 경우 아무 것도 하지 않는다.