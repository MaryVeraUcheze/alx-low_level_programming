#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: array
 * @size: size of byte
 * Return: pointer to a newly allocated space in memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
