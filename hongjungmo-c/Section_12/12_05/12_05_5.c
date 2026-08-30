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

int main(void)
{
	// 자동 변수의 특징

	// 4. 블록이 없을 경우 자동 변수의 영역은 문장(Statement)의 시작부터 문장의 끝(;)까지가 된다.
	for (int i = 0; i < 10; ++i)
		printf("%d\n", i);

	return 0;
}