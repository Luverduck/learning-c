// 12.5 자동 변수
/*
	자동 변수 (Automatic Variable)
	Automatic Storage Class에 속하는 변수
	- 지속 시간 : automatic
	- 변수 영역 : block
	- 연결 상태 : none
	- 저장 위치 : 스택(Stack)
*/

#include <stdio.h>

void func()
{
	int i = 0;
	printf("%d\n", i);
	i++;
};

int main(void)
{
	// 자동 변수의 특징

	// 1. 변수가 속한 블록이 끝나면 자동으로 메모리를 해제한다. (automatic storage duration)
	func(); // 결과 : 0
	func(); // 결과 : 0

	return 0;
};