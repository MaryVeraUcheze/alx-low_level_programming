#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @n: size of memeory
 * @*s1: string to append to
 * @*s2: string to concatenate from
 * Return: pointer to a newly allocated space in memory
 */

#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	{
		return(NULL);
	}
	if (s2 == NULL)
	{
		return(NULL);
	}
	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);
	if (n >= s2_len)
	{
		n = s2_len;
	}
	char *result = malloc(s1_len + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';
	return result;
}
