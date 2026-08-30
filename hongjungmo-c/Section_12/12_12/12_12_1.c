// 12.12 난수 생성 모듈 예제
/*
	의사 난수 (Pseudo-Random Number)
	의사 난수 생성 알고리즘에 생성되는 수
	시드(seed)라고 하는 초기값에 의해 완전히 결정된다.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // rand(), srand()
#include <time.h> // time()

int main(void)
{
	// rand 함수
	// 0부터 RAND_MAX 범위의 의사 난수 반환
	// - RAND_MAX의 값은 구현에 따라 다르지만 보통 32767(0x7fff)로 정의되어 있다.
	// int rand(void);

	// rand 함수 예제
	for (int i = 0; i < 10; ++i) {
		printf("%d\n", rand());
	};

	return 0;
}