// 12.8 정적 변수의 외부 연결
/*
	외부 연결된 정적 변수 (Static Variable with External Linkage)
	Static with external linkage Class에 속하는 변수
	- 지속 시간 : static
	- 변수 영역 : file
	- 연결 상태 : external
	- 저장 위치 : 데이터 영역 또는 BSS 영역
*/

#include <stdio.h>

// 모든 함수 밖에서 extern 키워드로 선언
extern int i;

int main(void)
{
	// 외부 연결된 정적 변수 선언
	// 모든 함수의 밖에서 extern 키워드로 선언한다.

	return 0;
}