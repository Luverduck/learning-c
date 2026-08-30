// 8.8 메뉴 만들기 예제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> // exit(1)

char get_choice(void);
char get_first_char(void);
int get_integer(void);
void count(void);

int main(void)
{
	int user_choice;

	// 입력
	while ((user_choice = get_choice()) != 'q') {
		// 분기 처리
		switch (user_choice)
		{
			case 'a':
				printf("Avengers assemble!\n");
				break;
			case 'b':
				putchar('\a'); // Bell
				break;
			case 'c':
				count();
				break;
			case 'q':
				break;
			default :
				printf("Error with %d.\n", user_choice);
				exit(1); // 프로그램이 비정상적으로 종료됨
				break;
		}
	}

	return 0;
}

// 사용자의 입력을 받는 함수
char get_choice(void) {
	// 안내 텍스트
	printf("Enter the letter of your choice.\n");
	printf("a. avenger\tb. beep\n");
	printf("c. count\tq. quit\n");
	// 사용자 입력
	char user_choice;
	user_choice = get_first_char();
	// 사용자 입력이 a, b, c 또는 q일 때까지 반복
	while ((user_choice < 'a' || user_choice > 'c') && user_choice != 'q') {
		printf("Please try again.\n");
		user_choice = get_first_char();
	}
	// 반환
	return user_choice;
};

// 사용자의 입력에서 첫 글자만 추출하는 함수
char get_first_char(void) {
	// 입력 버퍼에서 첫 글자만 반환하여 ch에 저장
	char ch;
	ch = getchar();
	// 입력 버퍼 비우기
	while (getchar() != '\n') {
		continue;
	};
	// 반환
	return ch;
};

// 사용자로부터 정수만 입력받는 함수
int get_integer(void) {
	// 입력이 하나의 정수일 때까지 입력을 반복
	int input;
	char c;
	while (scanf("%d", &input) != 1) {
		while ((c = getchar()) != '\n') {
			putchar(c);
		}
		printf("is not an integer.\nPlease try again.");
	}
	// 반환
	return input;
};

// 1부터 입력받은 정수까지 카운트
void count(void) {
	// 안내 텍스트
	printf("Enter an integer :\n");

	// 입력
	int n;
	n = get_integer();

	// 출력
	for (int i = 1; i <= n; ++i) {
		printf("%d\n", i);
	};
};