// 15.11 비트 필드의 패딩

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h> // memset()

void char_to_binary(unsigned char uc)
{
	const int bits = CHAR_BIT * sizeof(unsigned char);
	for (int i = bits - 1; i >= 0; i--)
		printf("%d", (uc >> i) & 1);
};

void print_binary(char* data, int bytes)
{
	for (int i = 0; i < bytes; ++i)
		char_to_binary(data[bytes - 1 - i]);
	printf("\n");
};

int main(void)
{
	// 사용 비트의 크기 : 11[bit]
	// 멤버 중 가장 큰 자료형의 크기 : 16[bit] = 2[byte] (short)
	// 비트 필드의 크기 : 32[bit] = 4[byte]
	struct
	{
		unsigned char option1 : 3;
		unsigned char option2 : 2;
		unsigned short option3 : 6;
	} bbf;

	// 비트 필드의 크기
	printf("%zu bytes\n", sizeof(bbf));

	// 비트 필드의 모든 비트를 1로 초기화
	memset((char*)&bbf, 0xff, sizeof(bbf));
	print_binary((char*)&bbf, sizeof(bbf));

	// 첫 번째 멤버의 사용 비트 갯수를 0으로 변경
	bbf.option1 = 0;
	print_binary((char*)&bbf, sizeof(bbf));

	// 두 번째 멤버의 사용 비트 갯수를 0으로 변경
	bbf.option2 = 0;
	print_binary((char*)&bbf, sizeof(bbf));

	// 세 번째 멤버의 사용 비트 갯수를 0으로 변경
	bbf.option3 = 0;
	print_binary((char*)&bbf, sizeof(bbf));

	return 0;
}