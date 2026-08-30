// 2.12 읽기 좋은 코드를 만드는 요령

#include <stdio.h>

void my_function() // 1) 영역별로 줄맞춤 한다.
{ // 영역 [START]

	// 2) Tab 키를 이용하여 들여쓰기(indenting)한다.
	// do something 1
	// do something 2

} // 영역 [END]

int main(void)
{
	// 3) 띄어쓰기를 이용하여 알아보기 쉽게 한다.
	int x = 1, y = 2;
	int z = 0;

	z = x + y;

	return 0;
}