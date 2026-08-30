// 14.18 열거형
/*
	열거형 (Enumerated Type)
	정수형 상수의 집합을 나타내는 자료형
*/

#include <stdio.h>
int main(void)
{
	// 열거형의 활용
	enum Levels
	{
		LOW = 100,
		MIDDLE = 500,
		HIGH = 2000
	};

	int score = 800;

	if (score > HIGH)
		printf("High score!\n");
	else if (score > MIDDLE)
		printf("Good job.\n");
	else if (score > LOW)
		printf("Not bad.\n");
	else
		printf("Do your best.\n");

	return 0;
}