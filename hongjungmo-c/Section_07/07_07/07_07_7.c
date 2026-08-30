// 7.7 논리 연산자 Logical Operator
/*
	최소 평가(minimal evaluation) 또는 단락 평가(short circuit evaluation)
	첫 번째 인수가 전체 표현식의 값을 결정하기에 충분하지 않은 경우에만 두 번째 인수를 평가
	- &&와 ||는 sequence point를 가진다.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	// 최소 평가 예제 2
	int x = 1, y = 2;

	// 1) x > 0 비교 후 x++(후위 연산)에 의해 x = x + 1 = 2 (sequence point)
	// 2) x + y = 2 + 2 = 4 이므로 전체 표현식의 결과 1
	if (x++ > 0 && x + y == 4) {
		printf("%d %d\n", x, y);
	}

	return 0;
}