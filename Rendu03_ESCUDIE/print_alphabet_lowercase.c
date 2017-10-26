#include <stdio.h>

void print_alphabet_lowercase(void)
{
	char  alphabet = 'a';

	while (alphabet <= 'z')
	{
		printf("%c", alphabet);
		alphabet++;
	}
	printf("\n");
}
