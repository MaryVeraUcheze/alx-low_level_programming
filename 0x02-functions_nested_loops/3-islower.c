#include "main.h"

/**
*  _islower - checks for lowercase character
*@v: character to be checked
* Return: 1 for lowercase character or 0 for anything else
*/
int _islower(int v)
{

	if (v >= 97 && v <= 122)
	{
	return (1);
	}
	return (0);
}
