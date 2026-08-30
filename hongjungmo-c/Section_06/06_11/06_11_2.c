// 6.11 콤마 연산자
/*
	콤마 연산자 (Comma Operator)
	하나 이상의 피연산자 또는 표현식들을 연결하는 연산자
	- 첫 번째 피연산자 또는 표현식을 평가한 후, 그 다음 피연산자 또는 표현식을 평가한다.
	- 평가 사이에 시퀀스 포인트가 있다.
*/

#include <stdio.h>
int main(void)
{
	// for문에서 콤마 연산자 사용
	for (int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n) 
	{
		printf("%d %d\n", n, nsqr);
	};

	return 0;
}