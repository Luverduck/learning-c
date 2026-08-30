// 11.5 문자열을 출력하는 다양한 방법들

#include <stdio.h>

void custom_put_1(const char* str);
int custom_put_2(const char* str);

int main(void)
{
	// 사용자 정의 출력 함수
	custom_put_1("Just ");
	custom_put_1("do it!");

	printf("%d\n", custom_put_2("12345"));

	return 0;
}

// 줄 바꿈을 하지 않는 출력 함수
void custom_put_1(const char* str)
{
	while (*str) // while (*str != '\0') 
	{
		putchar(*str++);
	};
};

// 줄 바꿈을 하는 출력 함수
int custom_put_2(const char* str)
{
	int count = 0; // 출력한 글자 수
	while (*str)
	{
		putchar(*str++);
		count++;
	};
	putchar('\n');

	return count;
};
