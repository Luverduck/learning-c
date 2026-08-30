// 14.8 구조체와 함수 연습문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NLEN 30

struct Name
{
	char first[NLEN]; // 이름
	char last[NLEN];  // 성
	int num;          // 글자 수
};

struct Name receive_input();
struct Name count_characters(struct Name name);
void show_result(const struct Name name);

int main(void)
{
	// 구조체 변수 생성
	struct Name user_name;

	// 이름을 입력받아 구조체에 저장
	user_name = receive_input();

	// 구조체의 글자 수 계산
	user_name = count_characters(user_name);

	// 이름과 글자 수 출력
	show_result(user_name);

	return 0;
}

// 이름을 입력받아 구조체에 저장
struct Name receive_input() 
{
	struct Name name_temp;

	int flag;

	printf("Input your first name :\n>> ");

	flag = scanf("%[^\n]%*c", name_temp.first);
	if (flag != 1)
		printf("Wrong input");

	printf("Input your last name :\n>> ");

	flag = scanf("%[^\n]%*c", name_temp.last);
	if (flag != 1)
		printf("Wrong input");

	return name_temp;
};

// 구조체의 글자 수 계산
struct Name count_characters(struct Name name_in_fnc) 
{
	name_in_fnc.num = strlen(name_in_fnc.first) + strlen(name_in_fnc.last);

	return name_in_fnc;
};

// 이름과 글자 수 출력
void show_result(const struct Name name_in_fnc)
{
	printf("Hi, %s %s. Your name has %d characters.\n", name_in_fnc.first, name_in_fnc.last, name_in_fnc.num);
};