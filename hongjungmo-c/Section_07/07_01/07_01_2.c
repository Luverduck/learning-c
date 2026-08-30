// 7.1 분기문 if
/*
	if ~ else 문
	if ( [expression] ) {
		[statement1]
	} else {
		[statement2]
	};
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
	else { // 짝수가 아닐 때(홀수)의 처리
		printf("Odd");
	}

	return 0;
}