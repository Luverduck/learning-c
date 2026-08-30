// 14.2 구조체의 기본적인 사용 방법
/*
	구조체에서 사용하는 연산자
	도트 연산자 (.)		: 구조체 변수를 통해 해당 구조체의 멤버에 접근
	화살표 연산자 (->)	: 구조체 포인터를 통해 해당 구조체의 멤버에 접근
*/

// 구조체의 선언
struct Person
{
	char name[41];
	float height;
	float weight;
	int age;
};

#include <stdio.h>

int main(void)
{
	// 구조체 변수 선언
	struct Person genie = { "Genie", 188.0, 75.0, 55 };

	// 구조체의 포인터 변수 선언
	struct Person* someone = &genie;

	// i) 구조체 변수로 멤버에 접근하는 경우
	genie.height = 190.0;

	// ii) 구조체 포인터로 멤버에 접근하는 경우
	someone->height = 190.0;

	// [참고] 구조체의 포인터 변수를 역참조하여 접근하는 경우
	(*someone).height = 190;

	return 0;
}