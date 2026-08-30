// 14.18 열거형
/*
	열거형 (Enumerated Type)
	정수형 상수의 집합을 나타내는 자료형
*/

#include <stdio.h>
int main(void)
{
	// 상수의 값을 지정하는 경우
	enum Levels 
	{ 
		LOW    = 100, 
		MIDDLE = 300, 
		HIGH   = 500
	};
	
	// 상수의 값은 지정한 값
	printf("%d\n", LOW);
	printf("%d\n", MIDDLE);
	printf("%d\n", HIGH);

	return 0;
}