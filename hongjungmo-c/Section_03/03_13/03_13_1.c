// 3.13 불형
/*
	불형(_Bool)
	- C99 이후 추가된 논리 자료형
	- 서식 지정자 없음
	
	_Bool (표준형)
	숫자 0 또는 1로 값을 표현 (0은 false, 1은 true에 대응)

	bool (stdbool.h를 포함할 경우)
	숫자 0 또는 1로 값을 표현 (0은 false, 1은 true에 대응)
	키워드 false, true로 값을 표현 (출력시 false / true의 값을 숫자로 표시)
*/

#include <stdio.h>
#include <stdbool.h> // 불리언형에 대한 헤더 파일
int main(void)
{
	// 표준형
	_Bool boolean;

	// 가질 수 있는 값
	boolean = 1; // true
	boolean = 0; // false

	// 크기 : 1[Byte]
	printf("%u\n", sizeof(_Bool)); // 결과 : 1

	// bool
	bool boolean2, boolean3;

	// 가질 수 있는 값
	// 1) 정수
	boolean2 = 1; // true
	boolean2 = 0; // false
	// 2) 키워드
	boolean3 = true; // true
	boolean3 = false; // false

	// 출력값
	printf("%d %d", boolean2, boolean3); // 결과 : 0 0

	return 0;
}