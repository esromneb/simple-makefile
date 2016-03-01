#include <stdio.h>

#define __COUNT__ (16)

int main(void)
{
	int i;
	int table[__COUNT__];

	// init the table
	for(i = 0; i < __COUNT__; i++)
	{
		table[i] = i*i;
	}

	printf("hello world\nSquared table\n\n");

	// iterate and print table
	for(i = 0; i < __COUNT__; i++)
	{
		printf("Table index %d is set to %d\n", i, table[i]);
	}

}
