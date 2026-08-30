// 5.9 표현식과 문장
/*
	문장 (Statements)
	수행할 동작을 명시하는 최소 단위의 독립적인 코드 또는 코드 블록
*/

#include <stdio.h>
int main(void)
{
	// 문장의 종류
	int x, y;            // declaration statement
	x = 2;               // assignment statement
	;                    // null statement

	y = 1 + (y = 5);     // 여기서 'y = 5'는 subexpression 

	while (x++) {        // structured statement
		y = x + y;
	};

	printf("%d\n", x);   // function call statement

	return 0;            // return statement
}