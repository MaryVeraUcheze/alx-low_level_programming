#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: first number
 * @m: flip number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;
	unsigned long int a = 0;
	unsigned long int b = 0;

	while (!(n == 0 && m == 0))
	{
		a = n & 1;
		b = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (a != b)
			i++;
	}
	return (i);
}
