// 15.11 비트 필드의 패딩

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
	// 사용 비트의 크기 : 5[bit]
	// 멤버 중 가장 큰 자료형의 크기 : 8[bit] = 1[byte] (bool)
	// 비트 필드의 크기 : 8[bit] = 1[byte]
	struct 
	{
		bool option1 : 4;
		bool option2 : 1;
	} bbf;
	printf("%zu bytes\n", sizeof(bbf));

	// 사용 비트의 크기 : 16[bit]
	// 멤버 중 가장 큰 자료형의 크기 : 16[bit] = 2[byte] (short)
	// 비트 필드의 크기 : 2[byte]
	struct
	{
		unsigned short option1 : 8;
		unsigned short option2 : 7;
		unsigned short option3 : 1;
	} usbf;
	printf("%zu bytes\n", sizeof(usbf));

	// 사용 비트의 크기 : 10[bit]
	// 멤버 중 가장 큰 자료형의 크기 : 64[bit] = 8[byte] (unsigned long long)
	// 비트 필드의 크기 : 16[byte]
	struct
	{
		unsigned char a : 1;
		unsigned int b : 2;
		unsigned long long c : 7;
	} bf;
	printf("%zu bytes\n", sizeof(bf));

	return 0;
}