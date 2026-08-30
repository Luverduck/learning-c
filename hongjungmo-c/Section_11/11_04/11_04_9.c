// 11.4 문자열을 입력받는 다양한 방법들

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* custom_str_input(char* str, int n);

int main(void)
{
	// 사용자 정의 문자열 입력 함수
	char word[100];
	puts(custom_str_input(word, 100));

	return 0;
}

char* custom_str_input(char* str, int n)
{
	char* ptr_return;
	int i = 0;

	ptr_return = fgets(str, n, stdin);

	if (ptr_return)
	{
		while (str[i] != '\n' && str[i] != '\0') 
		{
			i++;
			if (str[i] == '\n') 
			{
				str[i] == '\0';
			}
			else 
			{
				while (getchar() != '\n') 
				{
					continue; // 입력 버퍼 비우기
				}
			}
		}
	}
};