// 12.18 자료형 한정자들 const, volatile, restrict

#include <stdio.h>
int main(void)
{
	// 	restrict
	// 해당 식별자가 식별자의 객체에 접근하기 위한 유일한 식별자임을 나타낸다.
	// - Visual Studio에서는 '_restrict' 키워드를 사용한다.
	// - Compiler가 해당 키워드가 붙은 포인터로만 특정 객체에 접근하도록 유도한다. (최적화를 위함)

	int a = 10;

	// 식별자 앞의 __restrict (2개의 '_'를 사용한다)
	int* __restrict ptr = &a;

	return 0;
}