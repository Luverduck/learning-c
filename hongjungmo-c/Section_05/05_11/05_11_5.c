// 5.11 자료형 변환

#include <stdio.h>ㄴ
int main(void)
{
	// 자료형 변환 예제
	char c;
	int i;
	float f;
	
	// 1. char를 int와 float로 변환 후 출력
	f = i = c = 'A';
	printf("%c %d %f\n", c, i, f); // 결과 : A 65 65.000000

	c = c + 2;		// c = 67 = 'C'
	i = f + 2 * c;	// i = 65.000000 + 2 * 67 = 65.000000 + 134.000000 = 199.000000 = 199
	printf("%c %d %f\n", c, i, f); // 결과 : C 199 65.000000

	// 2. char의 값이 표현 범위를 벗어난 정수일 경우
	c = 1106;	// 1106 = 0b10001010010
	printf("%c\n", c);

	// 3. char의 값이 표현 버위를 벗어난 실수일 경우
	c = 83.99;
	printf("%c\n", c);

	return 0;
}