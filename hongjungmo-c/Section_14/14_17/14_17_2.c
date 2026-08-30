// 14.17 익명 공용체

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Resident Register Number ex) 830422-1185600
struct PersonalOwner
{
	char rrn_first[7];  // 830422
	char rrn_second[8]; // 1185600
};

// Company Register Number ex) 111-22-33333
struct CompanyOwner
{
	char crn_first[4];  // 111
	char crn_second[3]; // 22
	char crn_third[6];  // 33333
};

// 차량 정보
struct CarData
{
	char model[15];
	int status; /* 0 = personal, 1 = company */
	
	// TO DO
	union
	{
		struct PersonalOwner po;
		struct CompanyOwner co;
	};
};

// 차량 정보 출력
void print_car(struct CarData car)
{
	printf("--------------------------------\n");
	printf("Car Model : %s\n", car.model);

	// TO DO
	if (car.status == 0)  // 개인 소유의 차량일 경우
		printf("Personal Owner : %s-%s\n",
			car.po.rrn_first, car.po.rrn_second);
	else                  // 회사 소유의 차량일 경우
		printf("Company Owner : %s-%s-%s\n",
			car.co.crn_first, car.co.crn_second, car.co.crn_third);

	printf("--------------------------------\n");
}

int main(void)
{
	// TO DO
	struct CarData my_car = {
		.model = "Avante", .status = 0, .po = { "830422", "1185600" }
	};

	struct CarData company_car = {
		.model = "Santafe", .status = 1, .co = { "111", "22", "33333"}
	};

	print_car(my_car);
	print_car(company_car);

	return 0;
}