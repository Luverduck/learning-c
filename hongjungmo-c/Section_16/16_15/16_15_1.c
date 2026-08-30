// 16.15 assert 라이브러리
/*
	assert.h
	C 언어의 표준 라이브러리로, assert 매크로를 포함하는 헤더 파일

	assert.h에 포함된 매크로
	assert( expression ) : 표현식의 결과가 false이면 강제 종료한다.
	- 디버그 모드에서만 동작한다.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>

int divide(int a, int b)
{
	// 오류가 발생할 수 있는 부분에 assert 매크로를 사용한다.
	assert(b != 0);
	// if (b == 0) {
	// 	 printf("Can't divide\n");
	// 	 exit(1);
	// }

	return a / b;
}

int main(void)
{
	// a에서 b를 나누는 예제
	int a, b;

	int f = scanf("%d %d", &a, &b);

	printf("a / b = %d\n", divide(a, b));

	return 0;
}