// 4.8 변환 지정자의 수식어들
/*
	형식 변환 수식어 (Format Conversion Modifier)
	형식 변환 지정자의 세부 옵션
	%[flags][width][.precision][length]specifier
*/

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <float.h>
int main(void)
{
	int num_integer_plus = 10010;
	int num_integer_minus = -10000;
	double num_real_number = 123.45678987;
	char num_char = 'H';
	char num_string[] = "Hello!";

	// 형식 변환 수식어 (Format Conversion Modifier)
	// %[flags][width][.precision][length]specifier

	// 1. flags
	printf("flags\n");
	printf("*%10d*\tWithout (-)\n", num_integer_plus);
	printf("*%-10d*\tWithout (-)\n", num_integer_plus); // - : 너비(width) 내에서 문자를 왼쪽 정렬 ( '-'를 입력하지 않을 경우 오른쪽 정렬 )
	printf("*%+10d*\tWith (+)\n", num_integer_plus);
	printf("*%+10d*\tWith (+)\n", num_integer_minus); // + : 숫자형 문자 앞에 부호 표시 ( 양수일 때 '+' 부호, 음수일 때 '-' 표시 )
	printf("*% 10d*\tspace\n", num_integer_plus);
	printf("*% 10d*\tspace\n", num_integer_plus); // (space) : 숫자형 문자 앞에 부호 표시 ( 양수일 때 공백 1칸, 음수일 때만 '-' 표시 )
	printf("*%#10d*\tWith #\n", num_integer_plus);
	printf("*%#10o*\tWith #\n", num_integer_plus);
	printf("*%#10x*\tWith #\n", num_integer_plus);
	printf("*%#10X*\tWith #\n", num_integer_plus); // # : 숫자형 문자 앞에 기수 접두사 표시 ( 변환 지정자 o, x, X와 함께 사용 )
	printf("*%010d*\tWith 0\n", num_integer_plus); // 0 : 너비(width) 내에서 빈 공간을 0으로 출력

	// 2. width
	printf("\nwidth\n");
	printf("*%4d*\t\twidth 4\n", num_integer_plus);
	printf("*%10d*\twidth 10\n", num_integer_plus); // (number) : 문자열 출력 영역의 최소 너비 지정 (최소 너비보다 출력할 문자열의 너비가 작으면 그 차이만큼 문자열 앞에 공백으로 표시)
	printf("*%*d*\twidth *\n", 10, num_integer_plus); // * : 문자열 출력 영역의 최소 너비를 인수로 지정 

	// 3. .precision
	printf("\n.precision\n");
	// decimal
	printf("*%10.5d*\tprecision 5 for decimal\n", num_integer_plus);
	printf("*%10.6d*\tprecision 6 for decimal\n", num_integer_plus);
	// octal
	printf("*%10.5o*\tprecision 5 for octal\n", num_integer_plus);
	printf("*%10.6o*\tprecision 6 for octal\n", num_integer_plus);
	// hexadecimal (0f digit)
	printf("*%10.4x*\tprecision 4 for hexadecimal (0f digit)\n", num_integer_plus);
	printf("*%10.5x*\tprecision 5 for hexadecimal (0f digit)\n", num_integer_plus);
	// hexadecimal (0F digit)
	printf("*%10.4X*\tprecision 4 for hexadecimal (0F digit)\n", num_integer_plus);
	printf("*%10.5X*\tprecision 5 for hexadecimal (0F digit)\n", num_integer_plus); // d, i, o, u, x, X에 대하여 출력할 문자열의 최소 출력 자릿수 지정 (최소 자릿수보다 문자열의 자릿수가 짧으면 그 차이만큼 문자열 앞에 0으로 표시)
	// real number
	printf("*%10.3f*\tprecision 3 for real number\n", num_real_number);
	printf("*%10.4f*\tprecision 4 for real number\n", num_real_number);
	// string of char
	printf("*%10.5s*\tprecision 5 for string of chars\n", num_string);
	printf("*%10.4s*\tprecision 4 for string of chars\n", num_string);
	// .0 precision
	printf("*%10.0f*\tprecision 0 for real number\n", num_real_number);
	printf("*%10.0s*\tprecision 0 for string of chars\n", num_string);
	printf("\n\n");
	printf("*%10.f*\tprecision 0 for real number (without text 0)\n", num_real_number);
	printf("*%10.*f*\tprecision * for real number (argument is 4)\n", 4, num_real_number);

	// 4. length
	printf("\nlength\n");
	// hh : 정수형 형식 변환 지정자와 함께 사용하며, signed char 또는 unsigned char형으로 출력
	printf("*%50hhd*\n", SCHAR_MAX);
	printf("*%50hhd*\n", SCHAR_MIN);
	printf("*%50hhu*\n", 255);
	printf("*%50hhu*\n", 0);
	// h : 정수형 형식 변환 지정자와 함께 사용하며, short int 또는 unsigned short int형으로 출력
	printf("*%50hd*\n", SHRT_MAX);
	printf("*%50hd*\n", SHRT_MIN);
	printf("*%50hu*\n", USHRT_MAX);
	printf("*%50hu*\n", 0);
	// l : 정수형 형식 변환 지정자와 함께 사용하며, long int 또는 unsigned long int형으로 출력
	printf("*%50ld*\n", LONG_MAX);
	printf("*%50ld*\n", LONG_MAX);
	printf("*%50lu*\n", ULONG_MAX);
	printf("*%50lu*\n", 0ul);
	// ll : 정수형 형식 변환 지정자와 함께 사용하며, long long int 또는 unsigned long long int형으로 출력
	printf("*%50lld*\n", LLONG_MAX);
	printf("*%50lld*\n", LLONG_MIN);
	printf("*%50llu*\n", ULLONG_MAX);
	printf("*%50llu*\n", 0ll);
	// j : 정수형 형식 변환 지정자와 함께 사용하며, intmax_t 또는 uintmax_t형으로 출력
	printf("*%50jd*\n", INT64_MAX);
	printf("*%50jd*\n", INT64_MIN);
	printf("*%50ju*\n", UINT64_MAX);
	printf("*%50ju*\n", 0ll);
	// z : 정수형 형식 변환 지정자와 함께 사용하며, size_t형으로 출력
	printf("*%50zd*\n", INT64_MAX);
	printf("*%50zd*\n", INT64_MIN);
	printf("*%50zu*\n", UINT64_MAX);
	printf("*%50zu*\n", 0ll);
	// t : 정수형 형식 변환 지정자와 함께 사용하며, ptrdiff_t형으로 출력
	printf("*%50hu*\n", 0);
	// L : 실수형 형식 변환 지정자와 함께 사용하며, long double형으로 출력
	printf("*%50Lf*\n", FLT_MAX);
	printf("*%50.47Lf*\n", FLT_MIN);
	printf("*%50.54Lf*\n", FLT_TRUE_MIN);
	printf("*%50Le*\n", FLT_MAX);
	printf("*%50.9Le*\n", FLT_MIN);
	printf("*%50.9Le*\n", FLT_TRUE_MIN);
	printf("*%50La*\n", FLT_MAX);
	printf("*%50.9La*\n", FLT_MIN);
	printf("*%50.9La*\n", FLT_TRUE_MIN);

	return 0;
}