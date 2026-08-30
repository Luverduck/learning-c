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

void receive_input(struct Name* name);
void count_characters(struct Name* name);
void show_result(const struct Name* name);

int main(void)
{
	// 구조체 변수 생성
	struct Name user_name;

	// 이름을 입력받아 구조체에 저장
	receive_input(&user_name);

	// 구조체의 글자 수 계산
	count_characters(&user_name);

	// 이름과 글자 수 출력
	show_result(&user_name);

	return 0;
}

// 이름을 입력받아 구조체에 저장
void receive_input(struct Name* ptr_name)
{
	int flag;

	printf("Input your first name :\n>> ");

	flag = scanf("%[^\n]%*c", ptr_name->first);
	if (flag != 1)
		printf("Wrong input");

	printf("Input your last name :\n>> ");

	flag = scanf("%[^\n]%*c", ptr_name->last);
	if (flag != 1)
		printf("Wrong input");
};

// 구조체의 글자 수 계산
void count_characters(struct Name* ptr_name)
{
	ptr_name->num = strlen(ptr_name->first) + strlen(ptr_name->last);
};

// 이름과 글자 수 출력
void show_result(const struct Name* ptr_name)
{
	printf("Hi, %s %s. Your name has %d characters.\n", ptr_name->first, ptr_name->last, ptr_name->num);
};