#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicates the string
 * @str: char
 * Return: 0
 */


char *_strdup(char *str)
{
	if (str == NULL)
	{
	return (NULL);
	}

	char *dup_str = (malloc(strlen(str) + 1));

	if (dup_str == NULL)
	{
	return (NULL);
	}

	strcpy(dup_str, str);

	return (dup_str);
}
