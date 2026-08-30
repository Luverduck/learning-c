// 12.7 블록 영역의 정적 변수
/*
	블록 영역 정적 변수 (Static Variable with Block Scope)
	Static with no linkage Class에 속하는 변수
	- 지속 시간 : static
	- 변수 영역 : block
	- 연결 상태 : none
	- 저장 위치 : 데이터 영역 또는 BSS 영역
*/

#include <stdio.h>

/*
int func(static int i) { // 정적 변수는 매개 변수로 사용할 수 없다.
	// ...
};
*/

int main(void)
{
	// 블록 영역 정적 변수의 특징

	// 3. 정적 변수는 매개 변수로 사용할 수 없다.

	return 0;
};