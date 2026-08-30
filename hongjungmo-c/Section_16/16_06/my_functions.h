#pragma once

// 변수의 선언
extern int status;

// 함수의 선언
extern int add(int a, int b);
void print_status();
void print_address();

// 정적 변수의 선언
static int int_static = 0;

// 정적 함수의 선언
static int multiply_static(int a, int b)
{
	return a * b;
};