// 7.13 goto를 피하는 방법

#include <stdio.h>
int main(void)
{
	/* conditional */
	int size = 15, cost;

	/* goto문 사용
	if (size < 10)
		goto a;
	goto b;
a: cost = 50 * size;
b: cost = 100 * size;
	*/

	// if문 사용
	if (size < 10)
		cost = 50 * size;
	cost = 100 * size; // else문도 가능

	return 0;
}