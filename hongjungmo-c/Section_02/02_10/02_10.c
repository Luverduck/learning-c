// 2.10 디버거 사용법
/*
	디버깅 주요 단축키
	- 디버깅 시작 / 중지 / 재시작
	  [F5] : Debugging 시작
	  [Shift] + [F5] : Debugging 중지
	  [Ctrl] + [Shift] + [F5] : Debugging 재시작
	  [Alt] + [Num *] : 다음 실행할 코드 라인으로 이동 (현재 실행 중인 코드의 위치)

	- 디버깅 Step 이동
	  [F5] : 다음 Breakpoint로 이동
	  [F11] : 함수 호출 지점에서 함수 내부로 이동한다.
	  [F10] : 다음 라인으로 이동한다.
	  [Shift] + [F11] : 함수를 끝까지 실행하고 함수를 호출한 지점으로 돌아간다.
*/

#include <stdio.h>

void say_hello(void);

int main(void)
{
	int x, y, z;

	x = 1;
	y = 20;
	z = 3;

	say_hello();

	return 0;
}

void say_hello(void) {
	printf("Hello World!");
};