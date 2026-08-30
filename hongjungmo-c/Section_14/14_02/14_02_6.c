// 14.2 구조체의 기본적인 사용 방법
/*
	typedef 예약어
	typedef : 기존의 자료형의 별칭을 정의
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
	// 사용자 정의 자료형

	// 기존의 구조체를 사용하는 경우
	typedef struct Person custom_type1;

	// 새로 구조체를 정의하는 경우
	typedef struct Human
	{
		char name[40];
		int age;
	} custom_type2;

	// 새로 익명 구조체를 정의하는 경우
	typedef struct
	{
		char name[40];
		char hobby[100];
	} custom_type3;

	return 0;
}