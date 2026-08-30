// 3.4 간단한 입출력 프로그램 만들기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// 변수 초기화
	int i = 0, j = 0;

	// 입력값을 받아 변수 i에 저장
	printf("Input two integers.\n"); // 안내문 출력
	scanf("%d%d", &i, &j); 
	// 1) 반드시 주소값을 인수로 넘겨야 한다.
	// 2) %d%d는 띄어쓸 수 있다.

	// 연산
	int sum = i + j;

	// 변수 i에 저장된 값 출력
	printf("Value is %d %d\n", i, j);
	printf("%d plus %d = %d\n", i, j, sum);

	return 0;
}