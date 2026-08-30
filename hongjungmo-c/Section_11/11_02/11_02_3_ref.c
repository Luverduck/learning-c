// 11.2 메모리 레이아웃과 문자열

#include <stdio.h>
#include <stdlib.h>

int var_global_initialized = 1;
int var_global_uninitialized;

void func_test();

int main(void)
{
	// 값이 저장되는 메모리 영역과 그 주소

	// Code 영역
	printf("%p [Code]\n", "I am a String.");

	// Data 영역
	printf("%p [Data]\n", &var_global_initialized);

	// BSS 영역
	printf("%p [BSS]\n", &var_global_uninitialized);

	// Heap 영역
	char* var_dynamic = (char*)malloc(sizeof(char) * 100);
	printf("%p [Heap]\n", var_dynamic);

	// Stack 영역
	func_test();

	return 0;
}

void func_test() {
	int var_local = 0;
	printf("%p [Stack]\n", &var_local);
};