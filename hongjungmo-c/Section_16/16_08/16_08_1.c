// 16.8 미리 정의된 매크로들, #line, #error
/*
	미리 정의된 매크로들
	__FILE__ 	전처리를 실행한 소스 파일의 이름(경로)
	__DATE__	전처리를 실행한 일자
	__TIME__	전처리를 실행한 시간
	__LINE__	전처리를 실행한 행 번호
	__func__	전처리를 실행한 함수의 이름
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("%s\n", __FILE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
	printf("%d\n", __LINE__);
	printf("%s\n", __func__);

	return 0;
}