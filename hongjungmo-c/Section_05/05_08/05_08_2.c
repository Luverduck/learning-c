// 5.8 증가, 감소 연산자
/*
	증감 연산자
	++	: 피연산자의 값을 1만큼 증가시킴
	--	: 피연산자의 값을 1만큼 감소시킴

	증감 연산자의 전위 연산과 후위 연산
	전위 연산(postfix operation) : 피연산자의 값을 증가 또는 감소시킨 후, 연산을 수행
	후위 연산(prefix operation) : 연산을 수행한 후, 피연산자의 값을 증가 또는 감소시킴
*/

#include <stdio.h>
int main(void)
{
	// 1부터 10까지 출력
	
	// 전위 연산
	printf("prefix operation\n");
	int count_prefix = 0;
	while (count_prefix < 10) {
		printf("%d ", ++count_prefix); // 결과 : 1 2 3 4 5 6 7 8 9 10
	}

	printf("\n\n");

	// 후위 연산
	printf("postfix operation\n");
	int count_postfix = 0;
	while (count_postfix < 10) {
		printf("%d ", count_postfix++); // 결과 : 0 1 2 3 4 5 6 7 8 9
	}

	printf("\n\n");

	return 0;
}