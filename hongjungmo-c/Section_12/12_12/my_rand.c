unsigned int next = 1;

int my_rand()
{
	for (int i = 0; i < 10; ++i)
	{
		next = next * 1103515245 + 1234;
		next = (unsigned int)(next / 65536) % 32768;
	}
	return next;
}

void my_srand(unsigned int seed)
{
	srand(seed);
}