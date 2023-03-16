#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked -  a function that allocates memory
 * @b: size
 * @str: pointer
 * return: 0
*/

void *malloc_checked(unsigned int b)
{
	int *str;
	str = (int*)malloc(b);

	if (str == NULL)
	{
		_exit (98);
	}
	return (str);
}