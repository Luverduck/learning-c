// 11.6 다양한 문자열 함수들
/*
	strlen 함수
	문자열의 길이 반환 (문자열이 할당된 메모리 시작 주소부터 널 문자 \0까지의 길이)
	size_t strlen( const char *str );
	- str : 문자열
*/

#include <stdio.h>

void fit_str(char* str, unsigned int size);

int main(void)
{
	// strlen 함수 예제
	
	// TO DO : 정해진 수만큼만 앞에서부터 문자열 출력
	char msg[] = "Just, do it!";

	puts(msg);
	printf("Length %d\n", strlen(msg));

	fit_str(msg, 4);

	puts(msg);
	printf("Length %d\n", strlen(msg));

	return 0;
}

void fit_str(char* str, unsigned int size)
{
	if (strlen(str) > size) {
		str[size] = '\0';
	};

	// [me]
	//*(str + limit) = '\0'; // 메모리를 침범할 우려가 있음
};