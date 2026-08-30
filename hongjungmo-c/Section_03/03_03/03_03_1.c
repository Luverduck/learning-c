// 3.3 scanf() 함수의 기본적인 사용법
/*
	전처리기 설정 변경 없이 scnaf()를 포함하여 컴파일하면 다음과 같은 오류가 발생한다.
	Error	C4996
	'scanf': This function or variable may be unsafe. 
	Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. 
	See online help for details.
*/

// 해결 방법 1) _CRT_SECURE_NO_WARNINGS 매크로를 정의한다.
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
	// 변수 초기화
	int i = 0;

	// 입력
	scanf("%d", &i); // & : ampersand

	// 출력
	printf("Value is %d\n", i);

	return 0;
}