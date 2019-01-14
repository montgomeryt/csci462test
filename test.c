#include <stdio.h>

void add_two(int* var)
{
	*var = *var + 2;
}

int main()
{
	int var = 5;

	add_two(&var);
	printf("5 + 2 = %d", var);

	return 0;
}