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
	// 공용체의 크기와 공용체 요소의 메모리 주소

	// 공용체 선언
	union MyUnion
	{
		int i;
		double d;
		char c;
	};

	// 공용체 변수 선언
	union MyUnion uni;

	// 공용체 변수의 정보 출력
	printf("%zd\n", sizeof(union MyUnion));  // 공용체의 크기
	printf("%lld\n", (long long)&uni.i);     // 공용체의 요소 i의 주소
	printf("%lld\n", (long long)&uni.d);     // 공용체의 요소 d의 주소
	printf("%lld\n", (long long)&uni.c);     // 공용체의 요소 c의 주소

	return 0;
}