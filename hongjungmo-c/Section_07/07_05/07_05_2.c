// 7.5 else와 if 짝짓기
/*
	중괄호를 생략한 if ~ else 문 사용시 주의 사항
	if와 else의 짝이 맞지 않을 경우 들여쓰기를 하더라도 이전 if와 짝짓기 된다.
*/

#include <stdio.h>
int main(void)
{
	int number = 3;
	if (number > 5)
	{
		if (number < 10)
			printf("Larger than 5 smaller than 10\n");
	}
	else
		printf("Less than or equal to 5");

	// 결과 : Less than or equal to 5

	return 0;
}