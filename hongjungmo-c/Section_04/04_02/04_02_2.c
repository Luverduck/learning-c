// 4.2 sizeof 연산자
/*
	배열의 sizeof 연산
	변수가 참조하는 배열의 메모리 크기가 반환된다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // 메모리 동적할당 함수 malloc()가 포함된 라이브러리
int main()
{
	// 배열의 sizeof 연산
	int array_int[30];
	size_t size_array = sizeof array_int;
	printf("%u\n", size_array); // 결과 : 120

	// 변수가 참조하는 배열의 주소
	// 배열을 나타내는 변수에 저장된 값은 배열의 첫 번째 요소의 값이 저장된 주소이다.
	// 따라서 배열의 sizeof 연산 결과는 해당 주소 값의 길이라고 생각할 수 있지만
	// 실제 배열의 sizeof 연산 결과는 변수가 참조하는 배열의 메모리 크기이다.
	// 변수에 저장된 값(주소)을 직접 출력하는 방법은 다음과 같다.
	printf("%p\n", array_int);
	printf("%p\n", &array_int); // &array_int = &array_int[0]
	printf("%p\n", &array_int[0]);

	// 배열의 동적 할당
	// 배열의 0번째 요소의 주소를 저장할 포인터 변수 선언 및 초기화
	int* int_ptr = NULL;
	// 런타임할 때 int형 메모리 30개를 할당한 후 0번째 요소의 주소를 포인터 변수에 저장
	int_ptr = (int*)malloc(sizeof(int) * 30);
};