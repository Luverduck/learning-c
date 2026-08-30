#pragma once

void different_function_in_different_file()
{
	printf("This function is %s\n", __func__); 
	// 결과 : different_function_in_different_file
	printf("This line is %d\n", __LINE__);
	// 결과 : 7
};