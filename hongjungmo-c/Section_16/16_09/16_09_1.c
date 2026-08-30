// 16.9 #pragma 지시자
/*
	전처리 지시자 #pragma
	컴파일러가 특정 작업을 하도록 지시한다.
*/

#include <stdio.h>

// #pragma pack
// 구조체 멤버의 정렬 방식을 지정한다.
#pragma pack(2)

struct Number
{
	int i;
	char ch;
	double d;
};

int main(void)
{
	struct Number number;
	printf("Size of number is : %zd", sizeof(number));
	return 0;
}