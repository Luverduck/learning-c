// 4.4 strlen() 함수
/*
	strlen()
	문자열(char의 배열)에서 NULL(\0) 이전까지 문자의 수 반환

	#include <string.h>
	strlen() 함수가 포함된 라이브러리
	이 라이브러리를 포함하지 않고 strlen()의 결과를 서식 지정자 %zu로 출력할 경우
	strlen() 결과가 int 타입으로 반환되므로 다음과 같은 오류 발생
	1) Size mismatch: 'int' passed as _Param_(3) when 'long long' is required in call to 'printf'.
	2) 'printf' : format string '%zu' requires an argument of type 'unsigned __int64', but variadic argument 2 has type 'int'
*/

#include <stdio.h>
#include <string.h> // strlen()가 포함된 라이브러리 (이 라이브러리를 포함하지 않을 경우 strlen()의 반환형이 int로 나와서 오류 발생
int main(void)
{
	char str1[100] = "Hello";
	printf("str1 : %zu %zu\n", sizeof(str1), strlen(str1)); 

	char str2[] = "Hello";
	printf("str2 : %zu %zu\n", sizeof(str2), strlen(str2));

	char str3[100] = "\0";
	printf("str3 : %zu %zu\n", sizeof(str3), strlen(str3));

	char str4[100] = "\n";
	printf("str4 : %zu %zu\n", sizeof(str4), strlen(str4));

	return 0;
}