// 7.12 다중 선택 switch와 break
/*
	switch ~ case문
	switch ( [variable] ) // 단, 정수형 변수만 가능
	{
		case [value_1] :
			[statement_1];

		case [value_2] :
			[statement_2];

		...

		case [value_X] :
			[statement_X];

		...

		case [value_N] :
			[statement_N];

		default :
			[statement_default];
	}
*/

#include <stdio.h>
int main(void)
{
	char ch;
	while ((ch = getchar()) != '.')
	{
		switch (ch)
		{
		case 'a':
			printf("apple ");

		case 'b':
			printf("baseball ");

		case 'c':
			printf("cake ");
			break;
		default:
			printf("nothing ");
			break;
		}

		while (getchar() != '\n')
			continue;
	}
	return 0;
}