// 14.2 구조체의 기본적인 사용 방법
/*
	구조체 변수의 선언 및 멤버의 초기화
	- 선언과 동시에 초기화
	- 선언과 초기화 분리
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
	// 구조체 변수의 선언 및 멤버의 초기화

	// - 선언과 동시에 초기화
	struct Person p1 = { "Will Smith", 188.0, 75.0, 55 };

	// - 선언과 초기화 분리
	struct Person p2;
	strcpy(p2.name, "Mena Massoud"); // 문자열 형태의 멤버 초기화
	p2.height = 173.0;
	p2.weight = 60.0;
	p2.age = 32;

	// - 지정된 초기화(Designated Initializer)
	struct Person p3 = {
		.height = 180.0,
		.name = "Naomi Scott",
		.age = 31,
		.weight = 45
	};

	return 0;
}