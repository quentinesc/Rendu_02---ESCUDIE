#include <stdio.h>
#include <stdlib.h>

void print_letter_repeating(char **argv)
{
	int nombre = 0;
	int i=0;

	int N = argv;
	nombre = N - 96;
	for(i = 0;i<nombre;i++)
	{
		printf("%c",N);
	}
	printf("\n");

}

