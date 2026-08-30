// 16.8 미리 정의된 매크로들, #line, #error
/*
	#line
	__LINE__과 __FILE__ 매크로를 재정의한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("__LINE__ : %d\n", __LINE__);
	printf("__FILE__ : %s\n", __FILE__);

	printf("\n");

#line 7 "Hello.txt"
	printf("After #line\n");
	printf("__LINE__ : %d\n", __LINE__);
	printf("__FILE__ : %s\n", __FILE__);

	return 0;
}