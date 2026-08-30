// 9.4 변수 영역과 지역 변수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int int_max(int i, int j);

int main(void)
{
	int a;	// main 함수 블록에 선언된 변수 a

	a = int_max(1, 2);

	printf("%d\n", a);	// 1-1) 변수 a에 저장된 값
	printf("%p\n", &a);	// 1-2) 변수 a의 메모리 주소

	{
		int a;	// main 함수 블록 내 새로 정의한 블록에 선언된 변수 a

		a = int_max(4, 5);

		printf("%d\n", a);	// 2-1) 블록 내 변수 a에 저장된 값
		printf("%p\n", &a);	// 2-2) 블록 내 변수 a의 메모리 주소
	}

	printf("%d\n", a);	// 3-1) 새로 정의한 블록 내 코드 실행 후 변수 a에 저장된 값
	printf("%p\n", &a);	// 3-2) 새로 정의한 블록 내 코드 실행 후 변수 a의 메모리 주소

	return 0;
}

int int_max(int i, int j)
{
	int m;
	m = i > j ? i : j;
	return m;
};