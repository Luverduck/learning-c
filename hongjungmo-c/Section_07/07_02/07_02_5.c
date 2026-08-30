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

	// getchar(), putchar() 예제 
	// 2) 'F'와 'f'를 필터링하여 '*'로 바꾸기
	while ((ch = getchar()) != '\n')
	{
		if (ch == 'F' || ch == 'f') {
			ch = '*';
		}
		putchar(ch);
	};

	return 0;
}