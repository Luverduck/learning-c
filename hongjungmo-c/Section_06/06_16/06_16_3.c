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
	// 배열의 입출력
	int array_int[3] = { 1, 3, 4 };

	// 입력 함수 scanf()를 통해 배열의 각 요소 초기화
	// 배열의 i번째 요소의 주소값을 통해 해당 주소에 저장된 값을 직접 변경
	scanf("%d", &array_int[0]); // 0번째 요소에 한하여 scanf("%d", array_int); 로도 작성할 수 있다 ( array_int = &array_int[0] )
	scanf("%d", &array_int[1]);
	scanf("%d", &array_int[2]);

	// 출력 함수 printf()를 통해 배열의 각 요소 출력
	// 배열의 인덱스 역참조 연산자 []를 통해 해당 요소에 저장된 값 출력
	printf("%d", array_int[0]);
	printf("%d", array_int[1]);
	printf("%d", array_int[2]);

	return 0;
}