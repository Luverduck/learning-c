// 6.11 콤마 연산자
/*
	콤마 연산자 (Comma Operator)
	첫 번째 피연산자를 평가한 후 그 결과를 버린 다음, 두 번째 피연산자를 평가하고 그 결과를 반환
	첫 번째 피연산자 평가 후 그 부수 효과 실행이 끝나면 오른쪽 피연산자 평가 (시퀀스 포인트)
*/

#include <stdio.h>
int main(void)
{
	// 콤마 연산자의 동작
	int i, j;
	i = 1;
	i++, j = 3;
	printf("%d %d\n", i, j); // 결과 : 2 3
	// i에 후위 증감연산 후, j에 3을 대입 및 R-value인 3을 반환

	int x, y;
	x = 1;
	printf("%d\n", (x++, y = 3));
	// ** 대입 연산자는 연산의 결과로 R-value를 반환한다.

	return 0;
}