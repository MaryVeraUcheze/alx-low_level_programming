#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion -  prints a string, followed by a new line.
 * @s: string
 */
void _puts_recursion(char *s);
{
	if (!s || !*s)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
