// 3.3 scanf() 함수의 기본적인 사용법
/*
	전처리기 설정 변경 없이 scnaf()를 포함하여 컴파일하면 다음과 같은 오류가 발생한다.
	Error	C4996
	'scanf': This function or variable may be unsafe.
	Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS.
	See online help for details.
*/

// 해결방법 2) 전처리기 정의 변경
// 프로젝트나 프로젝트 내 소스를 우클릭 후 [Properties]를 선택하여 
// [C/C++] - [Preprocessor]에 있는 [Preprocessor Definitions]의 값에 _CRT_SECURE_NO_WARNINGS를 추가한다.

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