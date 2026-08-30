// 8.4 사용자 인터페이스는 친절하게

#include <stdio.h>
int main(void)
{
	// TO DO : 'y'를 입력하면 카운트 +1, 'n'을 입력하면 중지하는 프로그램
	int count = 0;
	char ch;

	while (1) {
		// 안내 문자 출력
		printf("Current count is %d. Continue? (y/n)\n", count);
		
		// 입력
		ch = getchar();

		// 분기 처리
		if (ch == 'n') {
			break;
		}
		else if (ch == 'y') {
			count++;
		}
		else {
			printf("Please input y or n.\n");
		}
		
		// 입력 버퍼 비우기 (입력 버퍼에서 꺼낸 문자가 입력의 끝(\n)일 때까지 반복)
		while ((ch = getchar()) != '\n') {
			continue;
		}
	}

	return 0;
}