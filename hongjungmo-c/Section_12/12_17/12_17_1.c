// 12.17 동적 할당 메모리와 저장 공간의 분류
/*
	동적 변수 (Dynamic Variable)
	Dynamic Storage Class에 속하는 변수
	- 지속 시간 : dynamic (사용자가 직접 해제하기 전까지 메모리 유지)
	- 변수 영역 : -
	- 연결 상태 : -
	- 저장 위치 : 힙 (Heap)
*/

#include <stdio.h>
#include <stdlib.h>

int var_global = 123;

void func()
{
	int var_local = 123;
	printf("Local Variable \t\t%lld\n", (long long)&var_local);
}

int main(void)
{
	const char* message = "Banana";

	void (*ptr_func) = func; // address of function

	printf("Local Pointer \t\t%lld\n", (long long)&message);
	printf("Function Pointer \t%lld\n", (long long)&ptr_func);
	printf("String Data \t\t%lld\n", (long long)&message);
	printf("Function Address \t%lld\n", (long long)ptr_func);
	printf("Function Address \t%lld\n", (long long)main);
	printf("Global Variable \t%lld\n", (long long)&var_global);

	func();

	int* ptr = (int*)malloc(100 * sizeof(int));
	if (ptr == NULL) exit(EXIT_FAILURE);

	printf("Allocated Memory \t%lld\n", (long long)ptr);

	free(ptr);

	return 0;
}