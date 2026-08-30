// 10.15 포인터의 호환성
/*
	포인터의 호환성 관련 내용들은 
	문법적으로 허용하는 내용들이지만 권장하지 않는다. 
*/

#include <stdio.h>
int main(void)
{
	// 자료형이 다른 포인터
	
	// 변수
	int var_int = 5;
	double var_double = 1.5;

	// 포인터
	int* ptr_int;
	double* ptr_double;

	// 포인터의 자료형과 일치하는 자료형의 값이 저장된 메모리 주소 저장
	ptr_int = &var_int;
	ptr_double = &var_double;

	// 포인터의 자료형과 일치하지 않는 자료형의 값이 저장된 메모리 주소 저장 (허용)
	ptr_int = &var_double; // int * != double * 이므로 Warning
	ptr_double = &var_int; // double * != int * 이므로 Warning

	// 서로 다른 자료형의 포인터간의 대입 (허용)
	ptr_int = ptr_double;  // int * != double * 이므로 Warning

	return 0;
}