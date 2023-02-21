#include "main.h"

/**
* print_alphabet_x10 - prints ten times the alphabet, in lowercase
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{

	char az;
	int i = 0;

	while (i <= 9)
	{
	for (az = 'a'; az <= 'z'; az++)
	{
	_putchar(az);
	}

	_putchar('\n');
	i++;
	}

}
