// 4.1 문자열 입출력하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	// char에는 문자 하나만 저장할 수 있다.
	char fruit_name;

	printf("What is your favorite fruit?\n");

	// scanf로 입력받은 값을 저장할 때는 메모리 주소(&)를 사용한다.
	scanf("%c", &fruit_name);

	printf("You like %c!\n", fruit_name);

	return 0;
};