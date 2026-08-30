// 12.3 변수의 영역과 연결 상태, 객체의 지속 시간
/*
	객체의 지속 시간 (storage duration)
	객체가 값을 저장하기 위해 할당받은 메모리를 차지하고 있는 시간

	정적 기억 수명 (static storage duration)
	기억 수명이 프로그램의 시작부터 종료까지인 경우
	- 정적 기억 수명을 가진 변수를 정적 변수(static variable)라고 한다.

	자동 기억 수명 (auto storage duration)
	기억 수명이 블럭 시작부터 블럭 끝까지인 경우
	- 자동 기억 수명을 가진 변수를 자동 변수(automatic variable)라고 한다.

	할당 기억 수명 (allocated storage duration)
	기억 수명이 사용자가 직접 메모리를 할당한 시점부터 해지한 시점까지인 경우
*/

#include <stdio.h>

void count()
{
	// 자동 변수 : 블록의 시작부터 끝까지만 할당된 메모리 유지
	int count = 0;
	printf("count = %d\n", count);
	count++;
};

void count_static() 
{
	// 정적 변수 : 프로그램이 끝날 때까지 할당된 메모리 유지
	static int count = 0;
	printf("count = %d\n", count);
	count++;
}

int main()
{
	count();

	count();

	count_static();

	count_static();

	return 0;
};