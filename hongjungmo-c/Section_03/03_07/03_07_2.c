// 3.7 다양한 정수형들

#include <stdio.h>
int main(void)
{
	// 부호가 없는(unsigned) 정수형
	// unsigned char
	unsigned char unsigned_char = 1;
	printf("%c\n", unsigned_char); // 자료형 unsigned char의 형식 지정자 : %c와 %hhu 모두 가능
	printf("%hhu\n", unsigned_char);

	// unsigned short
	unsigned short unsigned_short = 1;
	unsigned short int unsigned_short_int= 1;
	printf("%hu\n", unsigned_short); // 자료형 unsigned short의 형식 지정자 : %hu

	// unsigned int
	unsigned int unsigned_int = 1;
	unsigned unsigned_ = 1;
	printf("%u\n", unsigned_int); // 자료형 unsigned int의 형식 지정자 : %u

	// unsigned long
	unsigned long unsigned_long = 1;
	unsigned long int unsigned_long_int = 1;
	printf("%lu\n", unsigned_long); // 자료형 unsigned long의 형식 지정자 : %lu

	// unsigned long long
	unsigned long long unsigned_long_long_ = 1;
	unsigned long long int unsigned_long_long_int = 1;
	printf("%llu\n", unsigned_long_long_); // 자료형 unsigned long long의 형식 지정자 : %llu

	return 0;
}