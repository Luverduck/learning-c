// 14.6 구조체와 포인터

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define LEN 20

// 이름(first name)과 성(last name)으로 구성된 이름(Name) 구조체
struct Name
{
	char given[LEN];  // first name
	char family[LEN]; // last name
};

// 전체 이름(full_name)과 전화번호(mobile)로 구성된 친구(Friend) 구조체
struct Friend
{
	struct Name full_name;
	char mobile[LEN];
};

int main(void)
{
	// 구조체의 크기 출력
	printf("%zd\n", sizeof(struct Friend));

	// 구조체 배열 생성
	struct Friend my_friend[2] = {
		{ { "Ariana", "Grande" }, "1234-5678" },
		{ { "Taylor", "Swift" }, "6550-8888" }
	};

	// 구조체 포인터 생성
	struct Friend* girl_friend = NULL;

	// 구조체 배열의 0번째 요소의 주소를 구조체 포인터에 저장
	girl_friend = &my_friend[0];

	// 구조체 배열의 0번째 요소의 멤버(구조체) full_name의 이름(given) 출력
	printf("%lld %s\n", (long long)girl_friend, girl_friend->full_name.given); // 결과 : Ariana

	// 구조체 포인터 증감 연산 => 구조체 배열의 1번째 요소의 주소
	girl_friend++;

	// 구조체 배열의 1번째 요소의 멤버(구조체) full_name의 이름(given) 출력
	printf("%lld %s\n", (long long)girl_friend, (*girl_friend).full_name.given); // 결과 : Taylor

	return 0;
}