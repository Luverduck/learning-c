// 3.9 고정 너비 정수
/*
	고정 너비 정수 자료형의 출력
	- 헤더 파일 inttypes.h를 포함 
	  (inttypes.h에 고정 너비 자료형이 정의되어 있으므로 헤더 파일 stdint.h는 제외시켜도 된다.)
*/
#include <stdio.h>
#include <inttypes.h> // 고정 너비 정수 자료형을 출력하기 위한 서식 지정자를 포함
int main(void)
{
	// 고정 너비 정수 자료형
	int32_t i_32 = 1004; // 크기 32[Bit]의 데이터를 저장할 수 있는 정수 자료형

	// 출력
	printf("int32 = %d\n", i_32);
	// 서식 지정자를 inttypes.h에 정의된 매크로 상수 PRId32로 바꾼다.
	printf("int32 = %" PRId32 "\n", i_32);

	return 0;
}