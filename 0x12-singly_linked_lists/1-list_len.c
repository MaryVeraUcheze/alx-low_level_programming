#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer
 * Return:number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int v = 0;

	while (h != NULL)
	{
		v++;
		h = h->next;
	}
	return (v);
}
