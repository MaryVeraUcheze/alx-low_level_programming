#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: index
 * @n: number given
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int get;

	if (index > 50)
		return (-1);

	get = n >> index;

	return (get & 1);
}
