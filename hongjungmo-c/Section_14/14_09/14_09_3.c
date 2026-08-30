// 14.9 구조체와 할당 메모리

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc(), free()
#include <string.h> // strlen(), strcmp()

#define SLEN 81

struct Name
{
	char* first;      // 이름
	char* last;       // 성
	int num;          // 글자 수
};

void receive_input(struct Name* name);        // allocation memory
void count_characters(struct Name* name);
void show_result(const struct Name* name);
void cleanup(struct Name* name);              // free memory

int main(void)
{
	// 구조체 변수 생성
	struct Name user_name;
	
	// 이름을 입력받아 구조체에 저장
	receive_input(&user_name); // getinfo

	// 구조체의 글자 수 계산
	count_characters(&user_name); // makeinfo

	// 이름과 글자 수 출력
	show_result(&user_name);

	// 동적 할당한 메모리 해제
	cleanup(&user_name);

	return 0;
}

void receive_input(struct Name* ptr_name)
{
	// 입력값을 저장할 버퍼 선언
	char temp[SLEN] = { 0, };

	int flag;

	printf("Input your first name :\n>> ");

	flag = scanf("%[^\n]%*c", temp);
	if (flag != 1)
		printf("Wrong input");
	else {
		ptr_name->first = (char*)malloc(strlen(temp) + 1);
		if (ptr_name->first != NULL)
			strcpy(ptr_name->first, temp);
		else
			printf("Malloc() failed");
	}

	printf("Input your last name :\n>> ");

	flag = scanf("%[^\n]%*c", temp);
	if (flag != 1)
		printf("Wrong input");
	else {
		ptr_name->last = (char*)malloc(strlen(temp) + 1);
		if (ptr_name->last != NULL)
			strcpy(ptr_name->last, temp);
		else
			printf("Malloc() failed");
	}
};

void count_characters(struct Name* ptr_name)
{
	ptr_name->num = strlen(ptr_name->first) + strlen(ptr_name->last);
};

void show_result(const struct Name* ptr_name)
{
	printf("Hi, %s %s. Your name has %d characters.\n", ptr_name->first, ptr_name->last, ptr_name->num);
};

void cleanup(struct Name* ptr_name)
{
	free(ptr_name->first);
	free(ptr_name->last);
};