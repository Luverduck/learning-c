// 14.2 구조체의 기본적인 사용 방법
/*
	구조체의 선언
	struct [태그명]
	{
		[멤버 자료형] [멤버 이름];
		[멤버 자료형] [멤버 이름];
		...
		[멤버 자료형] [멤버 이름];
	};
*/

#include <stdio.h>
int main(void)
{
	// 구조체의 선언
	struct Person
	{
		char name[41];
		float height;
		float weight;
		int age;
	};

	// 익명 구조체의 선언
	struct
	{
		char name[41];
		int age;
	};

	return 0;
}