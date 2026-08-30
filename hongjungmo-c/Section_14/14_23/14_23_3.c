// 14.23 자료형에게 별명을 붙여주는 typedef
/*
	예약어 typedef
	기존에 존재하는 자료형의 별칭을 정의한다.
*/

#include <stdio.h>

// 배열 선언
char arr[3] = { 'A', 'B', 'C' };

// 함수 실행의 결과로 길이 3인 char 배열의 포인터를 반환하는 함수
char(*func1())[3]
{
	return &arr;
};

// 함수 포인터 선언 (typedef를 사용하지 않을 경우)
char(*(*ptr_func1))[3] = func1;

// 1. 함수 포인터의 자료형을 정의하여 함수 포인터 선언
// 길이 3인 char 배열을 가리키는 포인터 자료형의 별칭을 FPTR로 정의
typedef char(*FPTR())[3];
typedef char(*(*(PTR_FPTR)))[3];
// 함수 포인터의 선언 (typedef를 사용할 경우)
FPTR* ptr_func = func1;
PTR_FPTR ptr_func = func1;

// 2. 함수 포인터의 자료형을 정의하여 함수 선언
// - 길이 3인 char 배열을 가리키는 포인터 자료형의 별칭을 FPTR로 정의
typedef char TDARR[3];
// - 함수의 선언 (typedef를 사용할 경우)
TDARR* func2()
{
	return &arr;
}

int main(void)
{

	return 0;
}