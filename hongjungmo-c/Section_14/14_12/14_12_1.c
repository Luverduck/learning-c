// 14.12 익명 구조체
/*
	익명 구조체 (Anonymous Structure)
	태그가 없는 구조체
*/

#include <stdio.h>
int main(void)
{
	// 익명 구조체의 장점
	// - 중첩 구조체에서 더 쉽게 멤버에 접근할 수 있다.

	// 1) 익명 구조체를 사용하는 경우
	struct Person
	{
		int id;
		struct { char first[40]; char last[40]; };
	};

	// 구조체 변수 선언
	struct Person person = { 123, { "Bill", "Gates" } };

	// 멤버로의 접근
	puts(person.first);

	return 0;
}