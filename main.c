#include <stdio.h>

int main(void)
{
	int i;
	const c = 16;
	int table[c];

	// init the table
	for(i = 0; i < c; i++)
	{
		table[i] = i*i;
	}

	printf("hello world\nSquared table\n\n");

	// iterate and print table
	for(i = 0; i < c; i++)
	{
		printf("Table index %d is set to %d\n", i, table[i]);
	}

}
