// 14.9 구조체와 할당 메모리

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Name 
{
	char* first;
	char* last;
	int num;
};

int main(void)
{
	// 구조체 변수 선언
	struct Name name = { "Hyun-Yong", "Eom" };
	printf("%s %s\n", name.first, name.last);
	// first와 last에 저장된 주소는 Code 영역에 저장된 문자열 "Hyun-Yong"과 "Eom"의 주소이다.

	// scanf로 first에 저장된 주소의 메모리 값 변경을 시도할 경우
	int flag = scanf("%[^\n]%*c", name.first);
	printf("%s %s\n", name.first, name.last);
	// Code 영역(Read-Only)에 저장된 문자열은 변경할 수 없으므로 scanf에서 오류 발생

	return 0;
}