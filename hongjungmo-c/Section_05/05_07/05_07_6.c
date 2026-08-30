// 5.7 나머지 연산자

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int seconds = 0, minutes = 0, hours = 0;

	// 음수를 입력할 때 printf가 실행되지 않고 바로 반복을 종료
	printf("Input seconds : ");
	scanf("%d", &seconds);

	while (seconds >= 0) {
		// TODO : seconds -> hours, minutes, seconds
		minutes = seconds / 60;

		seconds = seconds % 60;	// seconds

		hours = minutes / 60;	// hours
		minutes = minutes % 60;	// minutes

		// print result
		printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

		// 입력한 값이 while 조건부 seconds >= 0 를 만족할 때 반복, 만족하지 않으면 바로 반복 종료
		printf("Input seconds : ");
		scanf("%d", &seconds);
	}

	printf("Good bye\n");

	return 0;
}