#include <stdio.h>
/**
 * main - Entry point
 * Description: prints Alphabets in lowercase & uppercase
 * stored in the variable n
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
	if (c == 'e' || c == 'q')
	{
	continue;
	}
}
	putchar(c);
putchar('\n');
return (0);
}
