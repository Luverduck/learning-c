// 16.2 전처리를 준비하는 과정
/*
	번역 단계 (Translation)
	전처리 전에 소스 코드에 있는 문자를 해석한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 국제어 문자 (International Characters) 처리
	puts("안녕하세요? 한글을 사랑합니다.\n");

	int arr[3] = { 1, 2, 3 };

	// 이중자 (Digraph Sequence) 처리
	printf("arr<:1:> == %d\n", arr<:1:>);
	// printf("arr[1] == %d\n", arr[1]);

	// 삼중자 (Trigraph Sequence) 처리
	printf("arr?(0??) == %d\n", arr??(0??));
	// printf("arr[0] == %d\n", arr[0]); 로 번역

	// 줄 바꿈 처리
	printf("long long long long long \
long long long long long\n");
	//printf("long long long long long long long long long long");
	// [주의] 들여쓰기 한 만큼 띄어쓰기로 인식
	printf("long long long long long \
	long long long long long\n");

	// 토큰 처리 (space, tab, line break, whitespace character 집합을 하나의 space로 인식)
	int /* a variable to count a number */n = 1;
	// int n = 1;
	// ** 토큰(token)이란 문법적 의미를 가지는 최소 단위를 의미한다.

	return 0;
}