// 14.9 구조체와 할당 메모리

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc(), free()
#include <string.h> // strlen(), strcmp()

#define SLEN 81

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

	// 문자열을 저장할 변수 선언
	char buffer[SLEN] = { 0, };
	// 변경할 문자열을 변수에 저장
	int flag = scanf("%[^\n]%*c", buffer);
	// 동적 할당 후 해당 메모리 주소를 first에 저장
	name.first = (char*)malloc(strlen(buffer) + 1);
	if (name.first != NULL) // 동적 할당에 성공하면
		strcpy(name.first, buffer); // buffer의 문자열을 first에 저장
	printf("%s %s", name.first, name.last);

	return 0;
}