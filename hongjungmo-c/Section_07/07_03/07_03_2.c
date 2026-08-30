// 7.3 ctype.h 문자 함수들
/*
	Reference Link
	https://www.tutorialspoint.com/c_standard_library/ctype_h.htm

	int islower(int ch)
	ch가 소문자일 경우 0이 아닌 값을 반환

	int isupper(int ch)
	ch가 대문자일 경우 0이 아닌 값을 반환

	int tolower(int ch)
	ch를 소문자로 변환한 후 그 값을 int로 반환

	int toupper(int ch)
	ch를 대문자로 변환한 후 그 값을 int로 반환
*/

// TO DO : 입력받은 문자가 소문자이면 대문자로, 대문자이면 소문자로 변환

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (islower(ch)) { // 'A' = 65, 'a' = 97
			ch = toupper(ch);
		}
		else if (isupper(ch)) {
			ch = tolower(ch);
		}

		putchar(ch);
	}

	return 0;
}