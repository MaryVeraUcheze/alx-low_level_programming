#include "lists.h"

/**
 *print_list - function that prints all the elements of a list_t list
 *@h: pointer
 *Return: the number of nodes
 */
size_t print_list(const list_t *h);
{
	unsigned int v = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
			h = h->next;
			v++;
	}
	return (v);
}
