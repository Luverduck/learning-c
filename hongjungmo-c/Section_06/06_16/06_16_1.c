// 6.16 배열과 런타임 에러
/*
	배열(Array)
	같은 자료형의 요소들로 이루어진 자료 구조
	연속된 주소의 메모리 공간에 할당
	인덱스(index)를 통해 배열의 특정 위치에 있는 요소에 접근
*/

#include <stdio.h>
int main(void)
{
	// 1. 배열의 선언과 초기화
	// 1) 배열의 선언
	char array_char[5];
	// 2) 배열의 요소 초기화
	array_char[0] = 'A';
	array_char[1] = 'B';
	array_char[2] = 'C';
	array_char[3] = 'D';
	array_char[4] = 'E';
	
	for (int i = 0; i < sizeof(array_char) / sizeof(char); ++i) {
		printf("%c ", array_char[i]);
	}
	printf("\n");

	// 2. 배열의 선언과 동시에 초기화
	int array_int[] = {1, 2, 3, 4, 5};
	
	for (int i = 0; i < sizeof(array_int) / sizeof(int); ++i) {
		printf("%d ", array_int[i]);
	}
	printf("\n");

	return 0;
}