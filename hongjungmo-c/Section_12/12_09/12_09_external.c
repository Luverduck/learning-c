#include <stdio.h>

extern int i = 0; // »ç¿ë X

void func()
{
	printf("%p\n", &i);
};