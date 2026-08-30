// 7.2 표준 입출력 함수들 getchar(), putchar() 예제
/*
	int getchar(void);
	표준 입력 스트림의 다음 위치 문자를 읽는다.
	- 표준 입력 스트림의 다음 위치 문자를 unsigned char로 읽는다.
	  읽기에 성공하면 읽은 문자를 int로 반환한다.
	  단, 입력 버퍼의 끝에 도달하거나 오류 발생시 -1(EOF)을 반환한다.
	  만약 표준 입력 스트림이 비어있을 경우 새로 입력을 받는다.

	int putchar(int ch);
	표준 출력 스트림의 현재 위치에 문자를 쓴다.
	- 표준 출력 스트림의 현재 위치에 int ch를 unsigned char로 변환하여 쓴다.
	  쓰기에 성공하면 쓴 문자를 int로 반환한다.
	  단, 오류 발생시 -1(EOF)을 반환한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // getchar(), putchar()
int main()
{
	int ch;
	int result;

	// getchar와 putchar의 세부 동작
	// EX) 'ABCdef'를 입력한 경우

	// 1. 초기 입력 버퍼가 비어있으므로 getchar에 의해 엔터('\n')가 입력될 때까지 사용자의 입력을 기다린다.
	// 2. 'ABCdef'를 입력한 후 엔터('\n')를 한다.
	// 3. 표준 입력 스트림의 다음 위치 값인 'A'를 읽고 변수 ch에 저장한다.
	ch = getchar();

	while (ch != '\n') // ch의 값이 '\n'(엔터)가 될 때까지 아래 실행문을 반복한다.
	{
		// 4. ch의 값을 unsigned char로 변환하여 표준 출력 스트림의 현재 위치에 쓴 후 쓰기에 성공한 값을 int로 반환한다.
		result = putchar(ch);
		printf("\tresult of putchar : %d\n", result);
		// 5. 입력 버퍼가 비어있지 않으므로 표준 입력 스트림의 다음 위치의 값인 'B'를 읽고 변수 ch에 저장한다.
		ch = getchar();
		// 루프 진입 조건이 false가 될 때까지 4와 5를 반복한다.
	};

	return 0;
}