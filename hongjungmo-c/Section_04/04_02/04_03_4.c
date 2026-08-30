// 4.2 sizeof 연산자
/*
	구조체(structure)의 sizeof 연산
	변수가 참조하는 char 배열의 메모리 크기가 반환된다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct MyStruct
{
	int i; // 4[Byte]
	float f; // 4[Byte]
};

int main()
{
	printf("%zu\n", sizeof(struct MyStruct));
};