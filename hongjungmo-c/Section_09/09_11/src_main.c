// 9.11 헤더 파일을 만드는 방법

#define _CRT_SECURE_NO_WARNINGS

#include "my_print_functions.h"

int main(void)
{
	print_hello();
	print_hi();
	print_hello();
	print_hi();
	print_str("No one lives forever.");
	print_str("Valar morghulis.");

	return 0;
}