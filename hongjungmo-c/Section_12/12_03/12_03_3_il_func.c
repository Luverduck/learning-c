// 12.3 변수의 영역과 연결 상태, 객체의 지속 시간

#include <stdio.h>

// 내부 연결된 전역 변수 => 사용 불가능
//extern int var_il;

void testLinkage()
{
	printf("Do something called\n");
	//printf("%d\n", var_il);
};