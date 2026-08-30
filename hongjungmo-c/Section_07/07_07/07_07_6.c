// 7.7 논리 연산자 Logical Operator
/*
	최소 평가(minimal evaluation) 또는 단락 평가(short circuit evaluation)
	첫 번째 인수가 전체 표현식의 값을 결정하기에 충분하지 않은 경우에만 두 번째 인수를 평가
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	// 최소 평가 예제 1
	int temp = (1 + 2) * (3 + 4);

	printf("Before : %d\n", temp);

	// 첫 번째 표현식 'temp == 0'이 이미 false이므로 
	// 두 번째 표현식 '++temp == 1024'는 평가되지 않는다.
	// 활용 : A && B 에서 A가 참일 때만 실행해야 할 표현식을 B로 하는 방법
	if (temp == 0 && (++temp == 1024)) {
		// do something
	}

	printf("After : %d\n", temp);

	return 0;
}