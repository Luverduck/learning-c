// 12.18 자료형 한정자들 const, volatile, restrict

#include <stdio.h>
int main(void)
{
	// 	volatile
	// 해당 식별자의 객체가 프로그램 외적인 요소에 의해 변할 수 있음을 나타낸다.
	volatile int a = 10;

	return 0;
}