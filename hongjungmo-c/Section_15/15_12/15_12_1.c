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
	printf("Alignment of char = %zu\n", alignof(char));
	printf("Alignment of Array = %zu\n", alignof(float[10]));
	printf("Alignment of Structure = %zu\n", alignof(struct { char c; int n; }));

	return 0;
}