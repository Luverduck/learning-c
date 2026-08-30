// 9.18 포인터형 매개변수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* a, int* b);

int main() {
	int a = 10;
	int b = 20;
	// main 함수의 변수 a, b와 swap 함수의 매개변수 a, b는 서로 '같은' 주소를 가리킨다.
	printf("main function - a:%p b:%p\n", &a, &b);
	// 1) 변수의 주소(address)를 인수로 하여 함수를 호출한다. (Call by Reference)
	swap(&a, &b);
	// 변수 a와 b의 값이 서로 바뀐다.
	printf("%d %d\n", a, b);
};

void swap(int* a, int* b) {
	// main 함수의 변수 a, b와 swap 함수의 매개변수 a, b는 서로 '같은' 주소를 가리킨다.
	printf("swap function - a:%p b:%p\n", a, b);
	// 2) 인수에 저장된 주소(address)을 매개변수에 복사(copy)하여 함수를 실행한다.
	int temp = *a; // 복사된 주소를 역참조하여 직접 값을 바꾼다.
	*a = *b;
	*b = temp;
};