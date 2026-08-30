// 16.17 가변 인수
/*
	가변 인수 (Variable Argument)
	함수를 실행시키기 위한 인수의 갯수를 고정되어있지 않은 인수
	- 가변 인수는...로 표기한다. 
	- 가변 인수는 하나 이상의 인수와 함께 선언되어야 한다. 
	- 가변 인수는 반드시 마지막 인수로 위치해야 한다.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdarg.h>

double average(int count, ...);

int main(void)
{
	double a = average(3, 1.1, 2.2, 3.3);
	printf("%lf\n", a);

	return 0;
}

double average(int count, ...)
{
	// 인수 포인터 (Argument Pointer)
	va_list ap;
	double sum = 0.0;
	
	// 인수 포인터를 가변 인수 이전 마지막 인수인 count의 주소로 초기화
	va_start(ap, count);
	for (int i = 0; i < count; ++i) 
	{
		// 자료형이 double인 가변 인수를 읽고 ap의 주소를 다음으로 이동시킨다.
		sum += va_arg(ap, double);
	}
	// 인수 포인터를 null로 초기화한다.
	va_end(ap);

	return sum;
};
