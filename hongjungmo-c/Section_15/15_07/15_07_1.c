// 15.7 비트단위 연산자의 다양한 사용법

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

//                    Shift      Decimal    Binary       HEX    Octet
#define MASK_SWORD   (1 << 0) // 2^0        0000 0001    0x01   01
#define MASK_SHIELD  (1 << 1) // 2^1        0000 0010    0x02   02
#define MASK_POTION  (1 << 2) // 2^2        0000 0100    0x04   04
#define MASK_GUNTLET (1 << 3) // 2^3        0000 1000    0x08   010
#define MASK_HAMMER  (1 << 4) // 2^4        0001 0000    0x10   020
#define MASK_KEY     (1 << 5) // 2^5        0010 0000    0x20   040
#define MASK_RING    (1 << 6) // 2^6        0100 0000    0x40   0100
#define MASK_AMULET  (1 << 7) // 2^7        1000 0000    0x80   0200

void char_binary(const char num);
void int_binary(const int num);

int main(void)
{
	// initial state
	char flags = 0; // Mask flags
	char_binary(flags);

	// 비트 OR 연산자로 특정 비트를 ON 할 수 있다.
	printf("\nTurning Bits On (Setting Bits)\n");
	flags = flags | MASK_SWORD;
	char_binary(flags);
	flags = flags | MASK_AMULET;
	char_binary(flags);

	// 비트 NOT 연산자와 비트 AND 연산자로 특정 비트를 OFF 할 수 있다.
	printf("\nTurning Bits Off (Cleaning Bits)\n");
	flags = flags | MASK_POTION;
	char_binary(flags);
	flags = flags & ~MASK_POTION;
	char_binary(flags);

	// 비트 XOR 연산자로 특정 비트를 TOGGLE 할 수 있다.
	printf("\nToggling Bits\n");
	flags = flags ^ MASK_HAMMER;
	char_binary(flags);

	flags = flags ^ MASK_HAMMER;
	char_binary(flags);

	flags = flags ^ MASK_HAMMER;
	char_binary(flags);

	// 비트 마스킹으로 특정 비트의 상태를 확인할 수 있다.
	printf("\nChecking the Value of a Bits\n");
	if ((flags & MASK_KEY) == MASK_KEY)
		printf(">> You can enter.\n");
	else
		printf(">> You can't enter\n");

	flags = flags | MASK_KEY; // Obtained a key!

	if ((flags & MASK_KEY) == MASK_KEY)
		printf(">> You can enter.\n");
	else
		printf(">> You can't enter\n");

	// 비트 마스킹으로 특정 비트만 표시할 수 있다.
	printf("\nTrimming\n");
	int int_flag = 0xffffffff;
	int_binary(int_flag);

	int_flag &= 0xf0f;
	int_binary(int_flag);

	return 0;
}

void char_binary(const char num)
{
	printf("Decimal %3d  \t== Binary ", num);
	const size_t bits = sizeof(num) * 8;
	for (size_t i = 0; i < bits; ++i)
	{
		const char mask = 1 << (bits - 1 - i);

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	};
	printf("\n");
};

void int_binary(const int num)
{
	printf("Decimal %3d  \t== Binary ", num);
	const size_t bits = sizeof(num) * 8;
	for (size_t i = 0; i < bits; ++i)
	{
		const int mask = 1 << (bits - 1 - i);
		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	};
	printf("\n");
};