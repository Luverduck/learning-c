// 3.4 간단한 입출력 프로그램 만들기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// 변수 초기화
	// int won = 0;
	float won = 0.0f;
	// int dollar = 0;
	float dollar = 0.0f;

	// 입력
	printf("Input Won.\n");
	scanf("%f", &won);

	// 실수는 기본적으로 double 자료형으로 표현된다.
	//dollar = won * 0.00089; // won은 float 자료형인 반면 0.00089는 double이므로 컴파일 중 오류 발생
	dollar = won * 0.00089f; // 리터럴 상수가 float임을 명시적으로 표시하기 위해 실수 접미사 f를 붙인다.

	// 연산
	printf("Dollar = %f\n", dollar);

	return 0;
}