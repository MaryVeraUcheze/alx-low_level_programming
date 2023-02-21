#include "main.h"

/**
*_isalpha -  a function that checks for alphabetic character.
*@v: character to be checked
* Return: 1 for lowercase character or 0 for anything else
*/
int _isalpha(int v)
{

	if ((v >= 65 && v <= 98) || (v >= 97 && v <= 122))
	{
	return (1);
	}
	return (0);
}
