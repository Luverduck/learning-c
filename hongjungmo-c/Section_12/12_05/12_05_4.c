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

	// 3. 블록 안과 밖에 동일한 식별자가 존재할 때, 블록 안에서 블록 밖의 식별자는 숨김 처리 된다.
	int i = 2;

	printf("i %lld\n", (long long)&i);    // 결과 : 856600212932

	{
		int i = 10; // name hiding
		printf("i %lld\n", (long long)&i);  // 결과 : 856600212964
	}

	return 0;
}