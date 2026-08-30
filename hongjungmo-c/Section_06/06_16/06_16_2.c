// 6.16 배열과 런타임 에러
/*
	배열(Array)
	같은 자료형의 요소들로 이루어진 자료 구조
	연속된 주소의 메모리 공간에 할당
	인덱스(index)를 통해 배열의 특정 위치에 있는 요소에 접근
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// 배열의 인덱스
	int array_int[3] = { 1, 3, 4 };

	// 배열의 인덱스 역참조 연산자 []를 이용하여 배열 array_int의 n번째 요소의 값에 접근
	printf("%d", array_int[0]); // 결과 : 1
	printf("%d", array_int[1]); // 결과 : 3
	printf("%d", array_int[2]); // 결과 : 4

	// 배열 변수와 배열의 0번째 요소 값이 저장된 메모리 공간의 시작 주소 출력
	printf("%p\n", array_int);     // 결과 : 000000B8FD8FF908
	printf("%p\n", &array_int[0]); // 결과 : 000000B8FD8FF908 => array_int = &array_int[0]

	return 0;
}