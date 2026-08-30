// 14.10 복합 리터럴
/*
	복합 리터럴 (Compound Literal)
	복합 리터럴 표현식을 통해 익명의 배열이나 구조체, 공동체를 선언할 수 있다.
	( type ){ initializer-list };
	- type : 선언할 객체 타입
	- initializer-list : 선언할 객체의 초기값

	복합 리터럴의 특징
	복합 리터럴은 l-value로 구분되며, 주소값을 가진다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 구조체 선언
struct Rectangle
{
	double width;
	double height;
};

double rectangle_area(struct Rectangle);
double rectangle_area_ptr(struct Rectangle*);

int main(void)
{
	// 2. 구조체 변수 선언 없이 함수에 구조체를 전달할 수 있다.
	double area = 0.0;

	// 함수에 복합 리터럴 전달
	area = rectangle_area( (struct Rectangle) { 1.0, 2.0 } );

	// 함수에 복합 리터럴의 주소 전달
	area = rectangle_area_ptr( &(struct Rectangle) { 3.0, 4.0 } );

	return 0;
}

// 입력받은 구조체 넓이 계산
double rectangle_area(struct Rectangle rectangle)
{
	return rectangle.width * rectangle.height;
};

// 입력받은 주소의 구조체 넓이 계산
double rectangle_area_ptr(struct Rectangle* ptr_rectangle)
{
	return ptr_rectangle->width * ptr_rectangle->height;
};