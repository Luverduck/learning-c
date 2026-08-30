// 15.1 비트단위 논리 연산자
/*
	~ : 비트가 1이면 0을, 0이면 1로 반전 (비트 NOT 연산)
	& : 대응하는 두 비트가 모두 1이면 1을 반환 (비트 AND 연산)
	| : 대응하는 두 비트 중에서 하나라도 1이면 1을 반환 (비트 OR 연산)
	^ : 대응하는 두 비트가 서로 다르면 1을 반환 (비트 XOR 연산)
*/

#include <stdio.h>
int main(void)
{
	// 비트 NOT 연산
	unsigned char num = 15;
	printf("num\t: %hhu\n", num);
	printf("~num\t: %hhu\n", ~num);

	unsigned char a = 6;
	unsigned char b = 5;
	
	// 비트 AND 연산
	printf("a & b\t: %hhu\n", a & b);

	// 비트 OR 연산
	printf("a | b\t: %hhu\n", a | b);

	// 비트 XOR 연산
	printf("a ^ b\t : %hhu\n", a ^ b);

	return 0;
}