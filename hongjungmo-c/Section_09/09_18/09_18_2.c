// 9.18 포인터형 매개변수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int a, int b);

int main() {
	int a = 10;
	int b = 20;
	// main 함수의 변수 a, b와 swap 함수의 매개변수 a, b는 서로 '다른' 주소를 가리킨다.
	printf("main function - a:%p b:%p\n", &a, &b);
	// 1) 변수의 값(value)를 인수로 하여 함수를 호출한다. (Call by Value) 
	swap(a, b);
	// 변수 a와 b의 값은 바뀌지 않는다.
	printf("%d %d\n", a, b);
};

void swap(int a, int b) {
	// main 함수의 변수 a, b와 swap 함수의 매개변수 a, b는 서로 '다른' 주소를 가리킨다.
	printf("swap function - a:%p b:%p\n", &a, &b);
	// 2) 인수에 저장된 값(value)을 매개변수에 복사(copy)하여 함수를 실행한다.
	int temp = a;
	a = b;
	b = temp;
};