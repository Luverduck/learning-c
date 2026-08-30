// 16.9 #pragma 지시자
/*
	전처리 지시자 #pragma
	컴파일러가 특정 작업을 하도록 지시한다.
*/

#include <stdio.h>

// #pragma warning
// 컴파일러 경고 메시지를 수정한다.
#pragma warning( disable : 4477 )
//#pragma warning( error : 4477 )

struct Number
{
	int i;
	char ch;
	double d;
};

int main(void)
{
	struct Number number;
	printf("Size of number is : %d", sizeof(number));
	return 0;
}