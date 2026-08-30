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
	// 자동 변수의 선언
	// 블록 안에서 auto 키워드로 선언하며, 키워드를 생략할 수 있다. 반드시 직접 초기화해야 한다.
	{
		// auto 키워드로 선언
		auto int i = 0;
	};

	{
		// auto 키워드 생략
		int i = 0;
	};

	return 0;
};