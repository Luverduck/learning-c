// 12.9 정적 변수의 내부 연결
/*
	내부 연결된 정적 변수 (Static Variable with Internal Linkage)
	Static with internal linkage Class에 속하는 변수
	- 지속 시간 : static
	- 변수 영역 : file
	- 연결 상태 : internal
	- 저장 위치 : 데이터 영역 또는 BSS 영역
*/

#include <stdio.h>

// 모든 함수 밖에서 static 키워드로 선언
static int i = 0;

int main(void)
{
	// 내부 연결된 정적 변수의 선언
	// 모든 함수 밖에서 static 키워드로 선언한다.

	return 0;
}