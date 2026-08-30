// 3.3 scanf() 함수의 기본적인 사용법

#include <stdio.h>
int main(void)
{
	// 변수 초기화
	int i = 0;

	// 입력
	scanf("%d", &i); // & : ampersand

	// 출력
	printf("Value is %d\n", i);

	return 0;
}