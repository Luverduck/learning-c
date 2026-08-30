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

// 자동 변수 카운트 함수
void count()
{
	int i = 0;
	printf("%lld\t i = %d\n", (long long)&i, i);
	i++;
};

// 블록 영역 정적 변수 카운트 함수
void count_static()
{
	static int i = 0;
	printf("%lld\t i = %d\n", (long long)&i, i);
	i++;
};

// 자동 변수 카운트 함수를 호출하는 함수
void count_caller()
{
	count();
};

// 블록 영역 정적 변수 카운트 함수를 호출하는 함수
void count_static_caller()
{
	count_static();
};

int main(void)
{
	// 블록 영역 정적 변수 예제

	// 자동 변수 카운트
	count();
	count();
	count_caller();

	// 블록 영역 정적 변수 카운트
	count_static();
	count_static();
	count_static_caller();

	return 0;
};