// 12.3 변수의 영역과 연결 상태, 객체의 지속 시간

#include <stdio.h>

// 전역 변수 (내부 연결)
static int var_il;

int main()
{
	var_il = 10;

	testLinkage();

	printf("%d\n", var_il);

	return 0;
};