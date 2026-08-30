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
	// time 함수
	// time_t time(time_t * second);
	// - second : 환산한 시간[초]를 저장할 주소
	
	// srand 함수에 time 함수 적용 예제
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 10; ++i) {
		printf("%d\n", rand());
	};

	return 0;
}