// 15.12 메모리 줄맞춤 alignof, alignas
/*
	alignof 연산자
	피연산자의 메모리 정렬(alignment) 값을 반환

	alignas 지정자
	선언할 객체의 메모리 정렬(alignment) 값을 지정
*/

// [주의] 컴파일러 설정
// 1. 솔루션 우클릭 후 [Properties] 선택 
// 2. [Configuration Properties] - [General] - [C Language Standard]에서 'ISO C11' 선택

#include <stdio.h>
#include <stdalign.h>

int main(void)
{
	// char의 정렬 : 1
	printf("Alignment of char = %zu\n\n", alignof(char));

	// char의 정렬을 지정하지 않을 경우
	char ca;
	printf("&ca : %p %lld\n", &ca, ((long long)&ca) % 8);
	printf("&ca : %p %lld\n", &ca, ((long long)&ca) % 16);
	printf("\n");

	// char의 정렬을 8(double)로 지정할 경우
	char _Alignas(double) cb;
	printf("&cb : %p %lld\n", &cb, ((long long)&cb) % 8);
	printf("&cb : %p %lld\n", &cb, ((long long)&cb) % 16);
	printf("\n");

	// char의 정렬을 16으로 지정할 경우
	char alignas(16) cc;
	printf("&cc : %p %lld\n", &cc, ((long long)&cc) % 8);
	printf("&cc : %p %lld\n", &cc, ((long long)&cc) % 16);

	return 0;
}