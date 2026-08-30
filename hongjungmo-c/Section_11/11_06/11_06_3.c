// 11.6 다양한 문자열 함수들
/*
	문자열 비교 (string compare)

	strcmp / strncmp 함수
	문자열을 비교한다.
	int strcmp( const char *str1, const char *str2 );
	int strncmp( const char *str1, const char *str2, size_t count );
	- str1, str2 : 비교할 문자열
	- count : 비교할 문자 수
*/

#include <stdio.h>
#include <string.h>

int impl_strcmp(char* str1, char* str2);
int impl_strncmp(char* str1, char* str2, size_t count);

int main()
{
	printf("%d\n", impl_strcmp("A", "A"));
	printf("%d\n", impl_strcmp("A", "B"));
	printf("%d\n", impl_strcmp("B", "A"));

	printf("%d\n", impl_strcmp("Hello", "Hello"));
	printf("%d\n", impl_strcmp("Banana", "Bananas"));
	printf("%d\n", impl_strcmp("Bananas", "Banana"));

	printf("%d\n", impl_strncmp("Banana", "Bananas", 6));

    return 0;
}

int impl_strcmp(char* str1, char* str2)
{
	while (*str1 != '\0')
	{
		// 두 문자열의 현재 index의 역참조 값이 다를 때
		if (*str1 != *str2) {
			break; // 루프 탈출 (현재 index의 역참조 값의 차이를 반환하기 위함)
		}

		// 그 외의 경우 다음 index로 넘어감
		str1++;
		str2++;
	};

	// 반환할 결과값
	int result = 0;
	if (*str1 > *str2) {
		result = 1;
	}
	else if (*str1 < *str2) {
		result = -1;
	}

	return result;
};

int impl_strncmp(char* str1, char* str2, size_t count)
{
	for (int i = 0; i < count; ++i) {
		if (*str1 != *str2) break;
		str1++;
		str2++;
	}

	int result = 0;
	if (*str1 > *str2) {
		result = 1;
	}
	else if (*str1 < *str2) {
		result = -1;
	}

	return 0;
};