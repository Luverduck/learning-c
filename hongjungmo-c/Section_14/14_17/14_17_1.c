// 14.17 익명 공용체
/*
	익명 공용체 (Anonymous Union)
	태그가 없는 공용체
*/

#include <stdio.h>
int main(void)
{
	// 익명 공용체의 장점
	// 공용체 변수명 없이 공용체의 요소에 직접 접근할 수있다.

	// 구조체 선언
	struct Vector2D
	{
		union // 구조체 안에 익명 공용체 선언
		{
			struct { double x, y; };
			struct { double i, j; };
			struct { double arr[2]; };
		};
	};

	// 구조체 변수 선언
	struct Vector2D vec2d = { 3.14, 2.99 };

	printf("%.2f %.2f\n", vec2d.x, vec2d.y);
	printf("%.2f %.2f\n", vec2d.i, vec2d.j);

	for (int i = 0; i < sizeof(vec2d.arr) / sizeof(vec2d.arr[0]); ++i)
		printf("%.2f ", vec2d.arr[i]);

	return 0;
}