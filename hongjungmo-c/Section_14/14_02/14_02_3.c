// 14.2 구조체의 기본적인 사용 방법
/*
	구조체 선언과 동시에 구조체 변수 선언
	struct [태그명]
	{
		[멤버 자료형] [멤버 이름];
		[멤버 자료형] [멤버 이름];
		...
		[멤버 자료형] [멤버 이름];
	} [변수명];
*/

#include <stdio.h>
int main(void)
{
	// 구조체 선언과 동시에 구조체 변수 선언
	struct Person
	{
		char name[41];
		float height;
		float weight;
		int age;
	} aladin, genie;

	return 0;
}