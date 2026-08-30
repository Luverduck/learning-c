// 함수의 선언이 포함된 헤더 파일 include
#include "my_functions.h"

#include <stdio.h>

// 헤더에 선언된 변수의 초기화
int status = 0;

// 헤더에 선언된 함수의 정의
void print_status()
{
	printf("Address = %p, Value = %d\n", &status, status);
}

void print_address()
{
	printf("print_address()\n");
	printf("Static function address %p\n", multiply_static);
	printf("Static Variable address %p\n", &int_static);
}