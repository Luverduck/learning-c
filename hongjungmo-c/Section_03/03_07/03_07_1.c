// 3.7 다양한 정수형들

#include <stdio.h>
int main(void)
{
	// 부호가 있는(signed) 정수형
	// char
	char _char = 1;
	signed char signed_char = 1;
	printf("%c\n", _char); // 자료형 char의 형식 지정자 : %c와 %hhd 모두 가능
	printf("%hhd\n", _char); 

	// short
	short _short_ = 1;
	signed short int signed_short_int = 1;
	printf("%hd\n", _short_); // 자료형 short의 형식 지정자 : %hd
	
	// int
	int _int = 1;
	signed int signed_int = 1;
	printf("%d\n", _int); // 자료형 int의 형식 지정자 : %d와 %i 모두 가능
	printf("%i\n", _int);

	// long
	long _long = 1;
	signed long signed_long = 1;
	printf("%ld\n", _long); // 자료형 long의 형식 지정자 : %ld

	// long long
	long long long_long_ = 1;
	long long int long_long_int = 1;
	printf("%lld\n", long_long_); // 자료형 long long의 형식 지정자 : %lld

	return 0;
}