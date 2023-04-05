#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer
 * @index: insex node
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int v = 0;
if (head == NULL)
{
	return (NULL);
}
while (head != NULL && v < index)
{
	if (index == 0)
	{
		return (NULL);
	}
	head = head->next;
	v++;
}
if (v != index)
{
	return (NULL);
}
printf("%u\n", v);
return (head);
}
