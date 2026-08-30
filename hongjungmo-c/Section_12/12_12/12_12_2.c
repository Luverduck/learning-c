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
	// srand 함수
	// 입력 시드(seed)를 통해 0부터 RAND_MAX 범위의 의사 난수 반환
	// void srand(unsigned int seed);
	// - seed : 난수 시드 (Random Seed)

	// srand 함수 예제
	srand(2);

	for (int i = 0; i < 10; ++i) {
		printf("%d\n", rand());
	};

	return 0;
}