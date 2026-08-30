// 10.1 배열과 메모리
/*
	배열 (Array)
	동일한 자료형의 데이터가 연속적으로 나열된 형태의 자료 구조
	- 배열은 연속된 메모리 공간에 할당된다.
	- 배열의 요소는 index로 접근할 수 있다.
*/

#include <stdio.h>
int main(void)
{
	// 배열 선언
	char arr_char[3] = { 'a', 'b', 'c' };
	// 주소 확인
	printf("sizeof(char) = %zu\n", sizeof(char));
	printf("%p\n", &arr_char[0]); // 요소간의 메모리 간격이 sizeof(char)임을 확인할 수 있다.
	printf("%p\n", &arr_char[1]);
	printf("%p\n", &arr_char[2]);

	printf("\n\n");

	// 배열 선언
	int arr_int[3] = { 1, 2, 3 };
	// 주소 확인
	printf("sizeof(int) = %zu\n", sizeof(int));
	printf("%p\n", &arr_int[0]); // 요소간의 메모리 간격이 sizeof(int)임을 확인할 수 있다.
	printf("%p\n", &arr_int[1]);
	printf("%p\n", &arr_int[2]);

	return 0;
}