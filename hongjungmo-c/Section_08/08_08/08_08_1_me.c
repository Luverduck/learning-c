// 8.8 메뉴 만들기 예제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	while (1) {
		// 안내 텍스트
		printf("Enter the letter of your choice.\n");
		printf("a. avenger\tb. beep\n");
		printf("c. count\tq. quit\n");

		// 입력
		char c;
		scanf("%c", &c);
		
		// 분기 처리
		switch (c) 
		{
			case 'a':
				printf("Avengers assemble!\n");
				break;
			case 'b' :
				printf("%c", 7);
				break;
			case 'c' :
				printf("Enter an integer.\n");
				int n;
				scanf("%d", &n);
				for (int i = 1; i <= n; ++i) {
					printf("%d\n", i);
				}
				break;
			case 'q' :
				break;
		}

		// 입력 버퍼 비우기
		while (getchar() != '\n') {
			continue;
		}

		// 종료 조건
		if (c == '\n') {
			break;
		};
	}

	return 0;
}