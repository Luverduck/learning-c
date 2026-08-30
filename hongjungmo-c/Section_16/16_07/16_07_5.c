// 16.7 조건에 따라 다르게 컴파일하기
/*
	전처리 지시자 #ifdef, ifndef
	매크로의 정의 여부에 따라 다른 전처리를 정의한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void say_hello()
{
#ifdef _WIN64
	printf("Hello, Win64");
#elif _WIN32
	printf("Hello, Win32");
#elif __LINUX_
	printf("Hello, Linux");
#endif
}

int main()
{
	say_hello();

	return 0;
};