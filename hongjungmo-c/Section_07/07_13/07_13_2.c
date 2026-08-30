// 7.13 goto를 피하는 방법

#include <stdio.h>
int main(void)
{
	/* loop */
	char ch;
/*
read: ch = getchar();
	putchar(ch);
	if (ch == '.') goto quit;
quit:
*/

	// while문과 break 사용
	while (1)
	{
		ch = getchar();
		putchar(ch);
		if (ch == '.') break;
	}

	return 0;
}