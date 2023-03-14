#include "main.h"
/**
 * create_array - function that creates an array of chars
 * @size: size
 * @c: specific character
 * Return: a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *s = malloc(size);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
