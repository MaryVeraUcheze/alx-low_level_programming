#include "main.h"
/**
 * create_array - function that creates an array of chars
 * @size: size
 * @c: specific character
 * Return: a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	int i, j;
	j = (int) size;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size);

	if (s == NULL)
	{
		return (NULL);
	}
	for(i = 0; i < j; i++)
	{
		s[i] = c;
	}
	return(s);
}
