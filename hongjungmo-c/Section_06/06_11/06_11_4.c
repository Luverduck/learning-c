// 6.11 콤마 연산자
/*
	콤마 연산자 (Comma Operator)
	하나 이상의 피연산자 또는 표현식들을 연결하는 연산자
	- 첫 번째 피연산자 또는 표현식을 평가한 후, 그 다음 피연산자 또는 표현식을 평가한다.
	- 평가 사이에 시퀀스 포인트가 있다.

	콤마 연산자의 결합(Associativity)
	콤마 연산자는 왼쪽에서 오른쪽 방향으로 결합한다.
*/

#include <stdio.h>
int main(void)
{
	int my_money = (123, 456);
	printf("%d\n", my_money);

	return 0;
}