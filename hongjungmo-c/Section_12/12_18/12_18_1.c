// 12.18 자료형 한정자들 const, volatile, restrict

#include <stdio.h>
int main(void)
{
	// const
	// 해당 식별자의 객체가 읽기 전용(Read - Only)임을 나타낸다.

	// 1. 일반 변수
	// 일반 변수 앞의 const
	const int a = 1;
	// a = 2;

	// 2. 포인터 변수
	int b = 1;
	int c = 2;
	// 1) 포인터 자료형 앞의 const
	const int* ptr_1 = &b;
	ptr_1 = &c;
	//*ptr_1 = 2;

	// 2) 포인터 변수명 앞의 const
	int* const ptr_2 = &b;
	// ptr_2 = &c;
	*ptr_2 = 2;

	// 3) 포인터 자료형 앞과 변수명 앞의 const
	const int* const ptr_3 = &b;
	// ptr_3 = &c;
	// *ptr_3 = 2;

	return 0;
}