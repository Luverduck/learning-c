// 4.6 명백한 상수
/*
	명백한 상수 (Manifest Constant)
	전처리문 #define로 정의된 상수
*/

// #define으로 정의된 명백한 상수 PI
#define PI 3.141592f

#include <stdio.h>
#include <limits.h>	// INT_MAX, INT_MIN, ... , etc.
#include <float.h>	// FLT_MAX, FLT_MIN, ... , etc.

int main(void)
{
	printf("PI is %f\n", PI);
	printf("Biggest int : %d\n", INT_MAX);
	printf("One byte in this system(64-bit) is %d bits\n", CHAR_BIT);
	printf("Smallest normal float %e\n", FLT_MIN);

	return 0;
}