// 6.12 제논의 역설
/*
	아킬레우스와 거북이
	아킬레우스가 100m 가는 동안 거북이 10m를 간다고 가정하고, 거북이가 아킬레우스보다 100m 앞에 있다고 가정해보자. 
	그 상태에서 아킬레우스가 거북을 따라잡기 위해 100m 앞으로 갔다고 하면 동시에 거북은 10m를 나아간다. 
	그러면 거북과 아킬레우스는 10m만큼 떨어져 있는데, 이 때 아킬레우스가 다시 10m를 더 나아가면 거북은 1m를 이동하여 거북이 다시 1m 만큼을 앞서게 된다. 
	마찬가지로 아킬레우스가 다시 1m를 가면 거북은 0.1m 더 나아간다. 
	따라서 아킬레우스는 아주 미세한 거리만큼을 항상 뒤처지게 되므로 아무리 가까워져도 거북을 따라잡는 건 불가능하다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	// 아킬레우스와 거북이 시뮬레이션 예제
	/*
		초기값
		Speed_turtle = 1.0[m/s]
		Speed_Archilleus = 10.0[m/s]
		Position_turtle_init = 10.0[m]
		Position_Archilleus_init = 0.0[m]
		Position_turtle = Position_turtle_init + (Speed_turtle * dt)
		Position_Archilleus = Position_Archilleus_init + (Speed_Archilleus * dt)
		Difference = | Position_turtle - Position_Archilleus |
		dt = Difference / Speed_Archilleus

		아킬레우스와 거북이 사이의 거리
		Step 1 : 
			Position_turtle = 10.0[m] + 1.0[m/s] * 1.0[s] = 11.0[m]
			Position_Archilleus = 0.0[m] + 10.0[m/s] * 1.0[s] = 10.0[m]
			Difference = | 11.0[m] - 10.0[m] | = 1.0[m]
			dt = 1.0[m] / 10.0[m/s] = 0.1[s]
		Step 2 : 
			Position_turtle = 11.0[m] + 1.0[m/s] * 0.1[s] = 11.1[m]
			Position_Archilleus = 10.0[m] + 10.0[m/s] * 0.1[s] = 11.0[m]
			Difference = | 11.1[m] - 11.0[m] | = 0.1[m]
			dt = 0.1[m] / 10.0[m/s] = 0.01[s]
		...
	*/

	const unsigned repeat_max = 100; // 측정 횟수

	// 속도
	const double speed_turtle = 1.0;
	const double speed_Archilleus = 10.0;

	// 초기 위치
	double distance_turtle = 10.0;
	double distance_Archilleus = 0.0;

	// 아킬레우스와 거북이 사이의 거리
	double difference = fabs(distance_turtle - distance_Archilleus);

	double dt = 1.0; // 측정 간격[s]
	double time = 0.0; // 걸린 시간[s]

	// 초기 상태 출력
	printf("Time = %.10fs, dt = %.10fs, Archilleus = %.10fm, Turtle = %.10fm\n", time, dt, distance_Archilleus, distance_turtle);

	for (unsigned i = 0; i < repeat_max; i++)
	{
		distance_Archilleus += speed_Archilleus * dt;
		distance_turtle += speed_turtle * dt;
		difference = fabs(distance_turtle - distance_Archilleus);
		time += dt;
		printf("Time = %.10fs, dt = %.10fs, Archilleus = %.10fm, Turtle = %.10fm, Difference = %.10fm\n", time, dt, distance_Archilleus, distance_turtle, difference);
		dt = difference / speed_Archilleus;
	};

	return 0;
}