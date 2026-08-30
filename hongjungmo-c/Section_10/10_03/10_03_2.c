// 10.3 포인터의 산술 연산
/*
	포인터의 덧셈/뺄셈 (Pointer Addition/Substraction)
	포인터와 정수 덧셈/뺄셈 시 포인터가 가리키는 자료형 크기의 정수배만큼 값이 증가/감소한다.
	현재 주소를 기준으로 이전/다음 정수 번째 데이터의 주소를 계산한다.
*/

#include <stdio.h>
int main(void)
{
	char* ptr_char = 0;
	int* ptr_int = 0;
	double* ptr_double = 0;

	char* ptr_char_next = ptr_char + 2;
	int* ptr_int_next = ptr_int + 2;
	double* ptr_double_next = ptr_double + 2;

	printf("%p %p\n", ptr_char, ptr_char_next);
	printf("%p %p\n", ptr_int, ptr_int_next);
	printf("%p %p\n", ptr_double, ptr_double_next);

	return 0;
}