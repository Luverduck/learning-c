// 4.7 printf() 함수와 변환 지정자들
/*
	형식 변환 지정자 (Format Conversion Specifier)
	printf() 함수에 입력된 인수의 출력 서식 변경 
*/

#include <stdio.h>
#define PAGES 959
int main(void)
{
	int num_integer = 10000;
	double num_real_number = 123.45678987;
	char num_char = 126;
	char num_string[] = "Hello!";
	int* num_pointer = &num_integer;

	// 1. 정수형
	printf("%d\n", num_integer);
	printf("%i\n", num_integer); // %d 또는 %i : 부호가 없는 10진수로 표기
	printf("%o\n", num_integer); // %o : 부호가 없는 8진수로 표기
	printf("%x\n", num_integer); // %x : 부호가 없는 16진수로 표기 (0f 표기법)
	printf("%x\n", num_integer); // %x : 부호가 없는 16진수로 표기 (0F 표기법)

	// 2. 실수형
	printf("%f\n", num_real_number); // %f : 부동소수점 방식의 10진수로 표기 (10진 표기법)
	printf("%e\n", num_real_number); // %e : 부동소수점 방식의 10진수로 표기 (e-표기법)
	printf("%E\n", num_real_number); // %E : 부동소수점 방식의 10진수로 표기 (E-표기법)
	printf("%a\n", num_real_number); // %a : 부동소수점 방식의 16진수로 표기 (p-표기법)
	printf("%A\n", num_real_number); // %A : 부동소수점 방식의 16진수로 표기 (P-표기법)
	printf("%g\n", num_real_number); // %g : %f와 %e 중 더 짧은 값으로 표기
	printf("%G\n", num_real_number); // %G : %f와 %E 중 더 짧은 값으로 표기

	// 3. 문자형
	printf("%c\n", num_char); // %c : 부호가 있는 문자로 표기
	printf("%s\n", num_string); // %s : 문자열 표기

	// 4. 포인터
	printf("%p\n", &num_pointer); // %p : 포인터 주소값 표기

	return 0;
}