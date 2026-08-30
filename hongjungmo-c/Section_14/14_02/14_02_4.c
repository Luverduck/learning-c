// 14.2 구조체의 기본적인 사용 방법
/*
	구조체의 포인터
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
#include <stdlib.h>

int main(void)
{
	struct Person p1 = { "Will Smith", 188.0, 75.0, 55 };

	// 구조체 포인터
	struct Person* someone = NULL;

	// 구조체 포인터 someone은 구조체 변수 p1을 가리키게 된다.
	someone = &p1;

	// 구조체 포인터 someone의 오브젝트를 동적으로 생성한다.
	someone = (struct Person*)malloc(sizeof(struct Person));

	// 동적 할당 메모리 해제
	free(someone);

	return 0;
}