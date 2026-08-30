// 5.8 증가, 감소 연산자
/*
	증감 연산자
	++	: 피연산자의 값을 1만큼 증가시킴
	--	: 피연산자의 값을 1만큼 감소시킴

	증감 연산자의 전위 연산과 후위 연산
	전위 연산(postfix operation) : 피연산자의 값을 증가 또는 감소시킨 후, 연산을 수행
	후위 연산(prefix operation) : 연산을 수행한 후, 피연산자의 값을 증가 또는 감소시킴
*/

#include <stdio.h>
int main(void)
{
	int i = 1, j = 1;
	int i_prefix, j_postfix;

	i_prefix = ++i;
	j_postfix = j++;

	printf("%d %d\n", i, j);
	printf("%d %d\n", i_prefix, j_postfix);

	return 0;
}