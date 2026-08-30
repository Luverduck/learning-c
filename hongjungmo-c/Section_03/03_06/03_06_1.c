// 3.6 정수의 오버플로우
/*
	sizeof()
	- 자료형이나 변수의 크기(메모리 크기)를 반환해주는 '연산자'
	- sizeof() 연산 결과는 size_t 형태의 자료형을 가진다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i = 0;
	int size = sizeof(i);

	// sizeof()
	sizeof(int); // sizeof(자료형)
	sizeof(i);	// sizeof(변수)

	// sizeof() 연산의 결과를 출력하기 위한 형식 지정자로 %u를 사용한다.
	printf("%u\n", sizeof(int)); // 결과 : 4
	printf("%u\n", sizeof(i)); // 결과 : 4

	return 0;
}