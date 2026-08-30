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
	// 공용체 요소의 초기화와 메모리 공유

	// 공용체 선언
	union MyUnion
	{
		int i;
		double d;
		char c;
	};

	// 공용체 변수 선언
	union MyUnion uni;

	// 공용체 요소 c 초기화
	uni.c = 'A';
	printf("%c %x %d\n", uni.c, (int)uni.c, uni.i);

	// 공용체 요소 i 초기화
	uni.i = 0;
	// 공용체 요소 c 초기화
	uni.c = 'A';
	printf("%c %x %d\n", uni.c, (int)uni.c, uni.i);

	// 공용체 요소 d 초기화
	uni.d = 1.2;

	return 0;
}