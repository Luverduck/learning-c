// 14.3 구조체의 메모리 할당
/*
	구조체가 메모리에 할당되는 시점
	구조체를 선언할 때는 메모리에 할당되지 않는다.
	구조체를 변수로 선언할 때 메모리에 할당된다.
*/

#include <stdio.h>
int main(void)
{
	// 구조체 선언 (메모리에 할당 X)
	struct Person
	{
		int a;
		float b;
		double c;
	};

	// 구조체 변수 선언 (메모리에 할당 O)
	struct Person aladin, genie;

	return 0;
}