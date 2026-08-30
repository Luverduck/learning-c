// 10.3 포인터의 산술 연산
/*
	포인터의 증감 연산(Pointer Increment/Decrement)
	포인터 증감 연산 시 포인터가 가리키는 자료형 크기만큼 값이 증가/감소한다.
	현재 주소를 기준으로 이전/다음 번째 데이터의 주소를 계산한다.
*/

#include <stdio.h>
int main(void)
{
	char* ptr_char = 0;
	int* ptr_int = 0;
	double* ptr_double = 0;

	char* ptr_char_next = ++ptr_char;
	int* ptr_int_next = ++ptr_int;
	double* ptr_double_next = ++ptr_double;

	printf("%p %p\n", ptr_char, ptr_char_next);
	printf("%p %p\n", ptr_int, ptr_int_next);
	printf("%p %p\n", ptr_double, ptr_double_next);

	return 0;
}