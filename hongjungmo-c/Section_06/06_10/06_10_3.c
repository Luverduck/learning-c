// 6.10 다양한 대입 연산자들 (그리고 어셈블리 코드 확인법)

#include <stdio.h>
int main(void)
{
	int i = 1024; 
	
	i = i + 10;
	i += 10;

	return 0;
}