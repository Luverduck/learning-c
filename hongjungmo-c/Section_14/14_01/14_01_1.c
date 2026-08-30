// 14.1 구조체가 필요한 이유
/*
	구조체 (Structure)
	여러 자료형의 데이터 오브젝트가 연속적으로 나열된 형태의 자료 구조
	- 구조체의 멤버 변수들은 연속된 메모리 공간에 할당된다.
	- 구조체의 멤버 변수는 도트 연산자(`.`)로 접근할 수 있다.
*/

// 구조체 선언
struct Person 
{
	char name[4];
	float height;
	float weight;
	int age;
};

#include <stdio.h>
int main(void)
{
	// 구조체 변수의 선언
	struct Person p1;

	return 0;
}