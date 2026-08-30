// 2.6 printf 함수의 기본적인 사용법

// printf 함수는 stdio.h(표준 입출력 라이브러리)에 포함된 함수이다.
// 따라서 printf 함수를 사용하기 위해서는 반드시 stdio.h를 포함시켜야 한다.
#include <stdio.h>
int main(void)
{
	// 형식 지정자 (Format specifier)
	// 입력받은 인수를 출력에 표시하기 위한 형태를 지정하는 문자열
	int x, y, z;
	x = 1;
	y = 2;
	z = x + y;
	
	// %i : 정수(integer)
	printf("The x is %i\n", x);
	
	// %d : 십진수(decimal)
	printf("The y is %i\n", y);

	// 앞에서부터 순서대로 입력 인수들을 형식 지정자에 대응시켜 출력한다.
	printf("%i + %i = %i\n", x, y, z);

	// 퍼센트 기호(%)를 출력하기 위해서는 출력 문자열에 %%로 지정해야 한다.
	printf("The percent is %i%%", z);

	return 0;
}