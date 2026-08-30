// 12.12 난수 생성 모듈 예제
/*
	의사 난수 (Pseudo-Random Number)
	의사 난수 생성 알고리즘에 생성되는 수
	시드(seed)라고 하는 초기값에 의해 완전히 결정된다.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include "my_rand.h"

int main(void)
{
	// 난수 생성 모듈 예제
	my_srand((unsigned int)time(NULL));

	for (int i = 0; i < 10; ++i) {
		printf("%d\n", my_rand() % 6 + 1);
	};

	return 0;
}