// 12.10 변수의 저장 공간 분류 요약 정리
/*
	번역 단위 (translation unit)
	컴파일러가 전처리된 코드를 기계어로 번역하는 단위로, 보통 소스 파일(.c) 단위를 의미한다.

	Storage Class
	1. Automatic
	2. Register
	3. Static with no linkage
	4. Static with external linkage
	5. Static with internal linkage
*/

#include <stdio.h>
int main(void)
{

	return 0;
}