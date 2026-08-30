// 6.13 탈출조건 루프 do while
/*
	do ~ while문
	do {
		[실행문]
	} while ( [조건식] );
	* 실행문을 먼저 실행시킨 후 조건식(탈출 조건)을 평가한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// do ~ while문과 while문의 차이
	// do ~ while문은 조건식의 결과와 상관없이 루프 안의 실행문을 최소 한 번 이상 실행시키는 반면
	// while문은 조건식의 결과가 true일 때만 루프 안의 실행문을 실행시킨다.

	// TO DO : 미리 설정한 비밀번호와 일치하는 숫자를 입력할 때까지 입력을 반복하는 프로그램
	int secret_code = 337;
	int input = 0;
	
	// do ~ while문
	// 루프 안의 실행문을 실행한 후 조건식 평가
	do
	{
		printf("Enter secret code : ");
		scanf("%d", &input);
	} 
	while (input == secret_code);

	printf("Good!");

	// 조건식 input != secret_code이 false이지만
	// 실행문을 실행시켜 새로운 입력을 받는다.

	return 0;
}