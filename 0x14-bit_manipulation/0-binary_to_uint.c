#include "main.h"

/**
 *binary_to_uint - a function converts a binary number to an unsigned int
 *@b: pointer
 *Return: the converted number
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int b, length;

	length = strlen(b);

	if (b == NULL)
		return (0);

	for (b = 0; b < length; b++)
	{
		if (b[b] < '0' || b[b] > '1')
			return (0);

		result = (result << 1) | (b[b] - '0');
	}
	return (result);
}
