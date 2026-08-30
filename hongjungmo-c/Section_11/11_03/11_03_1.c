// 11.3 문자열의 배열
/*
	문자열의 배열
	문자열(1차원 배열)을 요소로 하는 문자열의 배열(2차원 배열)
*/

#include <stdio.h>
int main(void)
{
	// 문자열의 배열 선언
	// 포인터 배열로 선언된 문자열의 배열
	char* arr_str_1[5] = {
		"Dancing in the rain",
		"Counting apples",
		"Watching movies with friends",
		"Writing sad letters",
		"Studying the C language"
	};

	// 2차원 배열로 선언된 문자열의 배열
	char arr_str_2[5][40] = {
		"Studying the C++ language",
		"Eating",
		"Watching Netflix",
		"Walking around till dark",
		"Deleting spam emails"
	};

	const char* ptr_arr_1 = "Dancing in the rain";
	const char* ptr_arr_2 = "Studying the C++ language";

	printf("%s %llu %llu\n", arr_str_1[0], (unsigned long long)arr_str_1[0], (unsigned long long)ptr_arr_1);
	printf("%s %llu %llu\n", arr_str_2[0], (unsigned long long)arr_str_2[0], (unsigned long long)ptr_arr_2);

	return 0;
}