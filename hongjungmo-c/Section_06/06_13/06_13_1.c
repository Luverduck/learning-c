// 6.13 탈출조건 루프 do while

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// TO DO : 미리 설정한 비밀번호와 일치하는 숫자를 입력할 때까지 입력을 반복하는 프로그램
	
	// 내가 작성한 코드
	int answer = 1443;
	int input = 0;
	_Bool judge = 0;
	while (judge == 0) {
		printf("Enter secret code : ");
		scanf("%d", &input);
		if (input == answer) {
			judge = 1;
		};
	};

	printf("Good!");

	return 0;
}