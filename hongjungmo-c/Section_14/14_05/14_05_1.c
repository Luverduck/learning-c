// 14.5 구조체를 다른 구조체의 멤버로 사용하기

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define LEN 20

// 이름(first name)과 성(last name)으로 구성된 이름(Name) 구조체
struct Name
{
	char given[LEN];   // first name
	char family[LEN];  // last name
};

// 주인, 손님, 음식, 장소, 시간으로 구성된 예약(Reservation) 구조체
struct Reservation
{
	struct Name guest; // nested struct
	struct Name host;  // nested struct
	char food[LEN];
	char place[LEN];

	// time
	int year;
	int month;
	int day;
	int hours;
	int minutes;
};

int main(void)
{
	struct Reservation reservation = {
		.guest = {"Nick", "Carraway"},
		.host = {"Jay", "Gatsby"},
		.food = {"Escargot"},
		.place = {"the Gatsby mansion"},
		.year = 1925,
		.month = 4,
		.day = 10,
		.hours = 18,
		.minutes = 30
	};

	/*
		[출력문 예시]
		Dear Nick Carraway,
		I would like to serve you Escargot.
		Please visit the Gatsby mansion on 10/4/1925 at 18:30.
		Sincerely,
		Jay Gatsby
	*/

	// 형식 지정자
	const char* format = 
		"\
Dear %s %s,\n\
I would like to serve you %s.\n\
Please visit %s on %d/%d/%d at %d:%d.\n\
Sincerely,\n\
%s %s\n\
"; // 전처리기는 역 슬래시 '\' 뒤에 개행 문자가 올 경우 다음 행을 이어 붙인다.

	// 출력
	printf(format, 
		reservation.guest.given, reservation.guest.family,
		reservation.food,
		reservation.place, reservation.day, reservation.month, reservation.year, reservation.hours, reservation.minutes,
		reservation.host.given, reservation.host.family
	);

	return 0;
}