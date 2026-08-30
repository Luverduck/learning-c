// 4.3 문자열이 메모리에 저장되는 구조
/*
	문자열이 메모리에 저장되는 구조
	문자열은 char 배열에 저장된다.
	문자열이 저장될 때 문자열의 끝을 나타내는 NULL(\0)를 함께 저장한다.
	따라서 NULL이 저장되는 요소를 고려해서 배열의 길이를 선정해야 한다.
*/

#include <stdio.h>
int main(void)
{
	// 문자 
	// 초기화 : 홑따옴표(') 사용
	char c = 'a';
	// 출력 : 서식 지정자 %c 사용
	printf("%c\n", c);

	// 문자열 
	// 초기화 : 쌍따옴표(") 사용
	char str1[10] = "Hello";
	char str2[10] = {'H', 'i'};
	// 출력 : 서식 지정자 %s 사용
	printf("%s\n", str1); // 문자열의 끝을 NULL(\0)으로 구분한다.
	printf("%s\n", str2);

	printf("%hhi %hhi %hhi %hhi %hhi\n", str2[0], str2[1], str2[2], str2[3], str2[4]);

	// NULL(\0)이 포함된 문자열을 서식 지정자 %s로 출력할 경우 
	// NULL(\0) 이후의 문자열은 출력되지 않는다.
	char str3[20] = "Hello,\0World!";
	printf("%s\n", str3); // 결과 : Hello! 
	printf("%c\n", str3[10]); // 결과 : l ( \0 뒤에 있는 l ) 
	printf("%c\n", str3[11]); // 결과 : d ( \0 뒤에 있는 d )

	return 0;
}