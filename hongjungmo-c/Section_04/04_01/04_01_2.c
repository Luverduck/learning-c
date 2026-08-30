// 4.1 문자열 입출력하기
/*
	- 여러 문자(char)를 이어서 만든 문자를 문자열(String)이라 한다.
	- 문자열 변수는 문자 하나를 저장하는 char 타입의 배열로 선언한다.
	- 문자열 입출력 시 서식 지정자로 **%s**를 사용한다.
	- 문자열 입출력 시 인수는 문자열의 변수명을 사용한다. 	(문자열 변수에 저장된 값이 ‘주소’이기 때문)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	// char 타입의 배열로 선언한 문자열 변수
	char fruit_name[40];

	printf("What is your favorite fruit?\n");

	// 문자열 입출력 시 서식 지정자로 %s를 사용한다.
	// 문자열 입출력 시 인수는 문자열의 변수명을 사용한다. (문자열 변수에 저장된 값은 배열의 '주소')
	scanf("%s", fruit_name);

	// 문자열을 입력받을 때 서식 지정자 %s 를 사용한다.
	printf("You like %s!\n", fruit_name);

	return 0;
};