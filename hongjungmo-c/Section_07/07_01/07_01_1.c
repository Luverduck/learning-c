// 7.1 분기문 if
/*
	if문
	if ( [expression] ) {
		[statement]
	}
*/

// TO DO : 입력받은 양수가 짝수이면 "Even", 홀수이면 "Odd"를 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int number;

	printf("Input a positive integer : ");
	scanf("%d", &number);

	if (number % 2 == 0) { // 짝수일 때의 처리
		printf("Even");
	}

	if (number % 2 != 0) { // 홀수일 때의 처리
		printf("Odd");
	}

	return 0;
}