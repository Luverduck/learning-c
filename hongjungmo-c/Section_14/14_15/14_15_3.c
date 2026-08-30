// 14.15 공용체의 원리
/*
	공용체 (Union)
	여러 자료형의 요소가 하나의 데이터 오브젝트를 공유하는 형태의 자료형
	- 공용체의 요소들은 하나의 메모리 공간을 공유한다.
	- 공용체의 요소는 도트 연산자(`.`)로 접근할 수 있다.
*/

#include <stdio.h>
int main(void)
{
	// 공용체의 초기화

	// 공용체 선언
	union MyUnion
	{
		int i;
		double d;
		char c;
	};

	// 공용체 초기화
	// - 첫 번째 요소로 초기화
	union MyUnion uni1 = { 10 };

	// - 지정한 요소로 초기화
	union MyUnion uni2 = { .d = 1.2 };

	// - 다른 공용체를 복사
	union MyUnion uni = { .c = 'A' };
	union MyUnion uni3 = uni;

	printf("%d %f %c\n", uni1.i, uni2.d, uni3.c);

	return 0;
}