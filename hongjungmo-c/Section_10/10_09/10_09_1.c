// 10.9 포인터 연산 총 정리
/*
	포인터 관련 연산자
	& : 피 연산자에 할당된 메모리의 시작 주소 반환
	* : 피 연산자가 가리키는 메모리에 저장된 값 반환(접근)
*/

#include <stdio.h>

int main(void)
{
	int var = 10;

	// 포인터 선언과 초기화 분리
	int* ptr_var = NULL;
	ptr_var = &var;

	// 포인터 선언과 동시에 초기화
	//int* ptr_var = &var;

	// 포인터의 크기
	// - 운영체제의 환경(64bit / 32bit)에 의해 결정된다. 
	// - 포인터가 가리키는 자료형과 상관이 없다. 
	printf("%zd\n", sizeof(int*));
	printf("%zd\n", sizeof(double*));

	// 포인터의 역참조 연산
	printf("%d\n", *ptr_var); // 결과 : 10

	// 변수의 주소 연산
	printf("%p\n", &var); // 형식 지정자 %p : 포인터 주소값 표기

	// 포인터의 증감 연산
	// 포인터 증감 연산 시 포인터가 가리키는 자료형 크기만큼 값이 증가/감소한다.
	printf("%p\n", ptr_var); // 00000089444FF708
	ptr_var++;
	printf("%p\n", ptr_var); // 00000089444FF70C ( = 00000089444FF708 + 4 )

	// 포인터의 덧셈/뺄셈
	// 포인터와 정수 덧셈/뺄셈 시 포인터가 가리키는 자료형 크기의 정수배만큼 값이 증가/감소한다.
	printf("%p\n", ptr_var);       // 00000015A18FF8D4
	printf("%p\n", ptr_var + 4);   // 00000015A18FF8E4

	return 0;
}