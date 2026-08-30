// 5.7 나머지 연산자

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int seconds = 0, minutes = 0, hours = 0;

	while (seconds >= 0) { // 사용자가 음수를 입력할 때까지 반복하도록
		printf("Input seconds : ");
		scanf("%d", &seconds);

		// TODO : seconds -> hours, minutes, seconds
		seconds = seconds % 60;	// seconds

		minutes = seconds / 60;

		hours = minutes / 60;	// hours
		minutes = minutes % 60;	// minutes

		// print result
		printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
	}

	printf("Good bye\n");

	return 0;
}