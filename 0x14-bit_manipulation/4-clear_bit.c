#include "main.h"
/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index
 * @index: index
 * @n: number
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	long int get;

	if (index > 32)
		return (-1);

	get = 1 << index;
	*n = *n & ~get;

	return (1);
}
