// 15.10 비트 필드의 사용 방법

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

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
    // 비트 필드 선언
    struct Items
    {
        bool has_sword : 1;
        bool has_shield : 1;
        bool has_potion : 1;
        bool has_guntlet : 1;
        bool has_hammer : 1;
        bool has_key : 1;
        bool has_ring : 1;
        bool has_amulet : 1;
    } items_flag;

    // 대입 연산을 사용하여 비트 ON/OFF
    items_flag.has_sword    = 1;
    items_flag.has_shield   = 1;
    items_flag.has_potion   = 0;
    items_flag.has_guntlet  = 1;
    items_flag.has_hammer   = 0;
    items_flag.has_key      = 0;
    items_flag.has_ring     = 1;
    items_flag.has_amulet   = true;

    // 비트 필드의 크기
    printf("size = %zd\n", sizeof(items_flag));

    // 비트 필드를 이진수 형태로 출력
    print_binary((char*)&items_flag, sizeof(items_flag));

	return 0;
}