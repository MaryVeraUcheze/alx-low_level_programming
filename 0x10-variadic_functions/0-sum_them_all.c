#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: parameter
 * Return: 0 if n = 0, or result
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list list;

	unasigned int i;
	sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0, i < n, i++)
{
	sum += va_arg(list, int);
}
	va_end(list);

return (sum);
}
