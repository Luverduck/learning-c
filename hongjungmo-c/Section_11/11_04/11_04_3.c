// 11.4 문자열을 입력받는 다양한 방법들
/*
	fgets
	개행 문자 '\n' 또는 EOF를 발견하거나 읽은 문자의 수가 num - 1이 될 때까지 
	입력 스트림 stream을 읽고 개행 문자 '\n'를 포함하여 str에 저장한다.

	fputs
	문자열 str을 현재 위치의 출력 스트림에 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[100];

	// char *fgets( char *str, int num, FILE *stream );
	// str : 문자열을 저장할 주소
	// num : 최대 읽을 문자의 수 (널 문자를 제외한 num - 1 개의 문자를 읽는다)
	// stream : 입력 스트림
	fgets(str, 5, stdin);

	// int fputs( const char *str, FILE *stream );
	// str : 출력할 문자열의 주소
	// stream : 출력 스트림
	fputs(str, stdout);

	return 0;
}