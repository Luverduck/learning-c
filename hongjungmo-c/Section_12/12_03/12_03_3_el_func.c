// 12.3 변수의 영역과 연결 상태, 객체의 지속 시간

#include <stdio.h>

// 외부 연결된 전역 변수 => 사용 가능
extern int var_el;

void testLinkage()
{
	printf("Do something called\n");
	printf("%d\n", var_el);
};