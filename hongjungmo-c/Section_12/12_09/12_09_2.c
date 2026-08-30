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

static int i = 0;

void func()
{
	printf("%d\n", i);
	i++;
};

int main(void)
{
	// 내부 연결된 정적 변수의 특징
	
	// 1. 프로그램이 종료될 때까지 메모리를 유지한다. (static storage duration)
	func(); // 결과 : 0
	func(); // 결과 : 1

	return 0;
}