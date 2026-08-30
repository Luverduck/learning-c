// 5.11 자료형 변환
/*
	명시적 자료형 변환 (Explicit Type Conversion)
	자료형을 직접 변환
*/

#include <stdio.h>
int main(void)
{
	double d = (double)1.23f;
	
	int i = 1.6 + 1.7;
	printf("%d\n", i);
	// 1.6 + 1.7 = 3.3 연산 후 소수점 이하가 절삭되어 3이 출력

	int j = (int)1.6 + (int)1.7;
	printf("%d\n", j);
	// 1.6과 1.7 각각을 int로 변환하면 소수점이 절삭되어 1
	// 절삭한 숫자의 덧셈 1 + 1 = 2의 결과인 2 출력

	return 0;
}