// 8.1 입출력 버퍼
/*
	버퍼를 사용하는 입력
	int getchar();	:
		입력 버퍼가 비어있을 때,
		콘솔에 입력된 값을 입력 버퍼에 저장한 후
		입력 버퍼의 첫 번째 위치에 저장된 문자를 unsigned char로 읽고
		그 값을 반환한 후 입력 버퍼의 위치를 다음 위치로 이동시킨다.
		입력 버퍼가 비어있지 않을 때,
		입력 버퍼의 현재 위치에 저장된 문자를 unsigned char로 읽고
		그 값을 반환한 후 입력 버퍼의 위치를 다음 위치로 이동시킨다.
		단, 입력 버퍼의 끝에 도달하거나 오류 발생시 -1(EOF)을 반환한다.

	버퍼를 사용하지 않는 입력
	int _getch();	:
		콘솔에 입력된 문자 하나를 unsigned char 읽고 그 값을 반환한다.
		입력한 문자를 콘솔에 표시한다. (echo)
	int _getche();	:
		콘솔에 입력된 문자 하나를 unsigned char 읽고 그 값을 반환한다.
		입력한 문자를 콘솔에 표시하지 않는다. (non-echo)
*/

#include <stdio.h>
#include <conio.h> // _getche(), _getch()
int main(void)
{
	char ch;

	while ((ch = _getch()) != '.') {
		// [statement]
	}

	return 0;
}