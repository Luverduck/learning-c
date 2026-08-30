// 6.2 의사 코드
/*
	의사 코드 (Pseudo Code, 수도 코드)
	자연어를 이용해 만든 문장을 프로그래밍 언어와 유사한 형식으로 배치한 코드
	* 자연어 : 프로그래밍 언어가 아닌 모든 언어 (한국어, 영어 등)
	
	의사 코드 작성의 의의
	특정 언어의 문법적인 요소를 고려하지 않으므로 오직 논리적 구조에만 집중할 수 있다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input = 0;
	int sum = 0;	// sum을 0으로 초기화한다.
	int status = 0;

	printf("Enter an integer (q to quit) : "); // 사용자에게 안내한다.
	status = scanf("%d", &input); // 사용자에게 입력을 받는다.

	while (status == 1) { // 입력이 정수인 동안에는
		sum = sum + input; // 그 입력을 sum에 더한다.

		printf("Enter next integer (q to quit) : "); // 사용자에게 안내한다.
		status = scanf("%d", &input); // 사용자에게 다음 입력을 받는다.
	}

	printf("SUM = %d\n", sum); // sum을 출력한다.
	return 0;
}