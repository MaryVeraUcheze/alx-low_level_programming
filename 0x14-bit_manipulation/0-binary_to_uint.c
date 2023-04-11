#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer
 * Return:the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int v;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (i = 0; b[v] != '\0'; v++)
	{
		num = num << 1;

		if (b[v] != '0' && b[v] != '1')
			return (0);
		if (b[v] == '1')
		num = num | 1;
	}
	return (num);
}
