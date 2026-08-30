// 12.3 변수의 영역과 연결 상태, 객체의 지속 시간

#include <stdio.h>

// 전역 변수 (외부 연결)
int var_el;

int main()
{
	var_el = 1024;

	testLinkage();

	printf("%d\n", var_el);

	return 0;
};