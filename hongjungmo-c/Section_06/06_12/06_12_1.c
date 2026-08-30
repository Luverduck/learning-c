// 6.12 제논의 역설
/*
	이분법의 역설
	아틀란타가 100m 앞에 있는 결승점까지 이동한다고 가정하자.
	결승점까지 이동하기 위해서는 먼저 절반 지점(1/2)에 도달해야 한다.
	그 다음으로 이동한 지점과 결승점 사이의 절반 지점(1/4)에 도달해야 한다.
	그 다음으로 이동한 지점과 결승점 사이의 절반 지점(1/8)에 도달해야 한다.
	무한히 계속되는 절반 지점에 의해 결승점에 가까워질 수는 있지만 도달하는 것은 불가능하다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// 일정한 속도로 움직이는 물체의 위치 추적
	/*
		초기값
		Speed : 1.0 [m/s]
		dt : 1.0[s]
		Distance = Speed * dt

		물체의 위치
		Step 1 : 1.0[m/s] * 1.0[s] = 1.0[m] => Distance = 1.0[m]
		Step 2 : 1.0[m/s] * 1.0[s] = 1.0[m] => Distance = 1.0[m] + 1.0[m] = 2.0[m]
		Step 3 : 1.0[m/s] * 1.0[s] = 1.0[m] => Distance = 2.0[m] + 1.0[m] = 3.0[m]
		...
	*/

	const double speed = 1.0; // 속도[m/s]
	const unsigned repeat_max = 10; // 측정 횟수

	double dt = 1.0; // 측정 간격[s]
	double time = 0.0; // 걸린 시간[s]
	double distance = 0.0; // 이동거리[m]

	for (unsigned i = 0; i < repeat_max; i++)
	{
		distance += speed * dt;
		time += dt;
		printf("Elapsed time = %.10fs, Distance = %.10fm\n", time, distance);
	};

	return 0;
}