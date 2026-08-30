// 6.1 while 반복 루프에서 scanf()의 반환값 사용하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// TO DO : q가 입력될 때까지의 입력받은 모든 정수 합 출력

	// 1. 준비
	int input = 0;	// 입력을 저장할 변수
	int sum = 0;	// 합계를 저장할 변수

	// 2. 입력
	printf("Enter an integer (q to quit) : ");

	// 3. 반복
	while (scanf("%d", &input) == 1) { // scanf()의 반환값을 while 반복 루프의 조건문에 포함시켜 중복 코드 제거
		// 현재 루프에 대한 처리
		sum = sum + input;
		// 다음 루프
		printf("Enter next integer (q to quit) : ");
	}

	// 4. 출력
	printf("SUM = %d\n", sum);
};