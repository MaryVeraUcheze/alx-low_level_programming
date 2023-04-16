#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head:pointer
 * @str:pointer
 * Return:the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}

/**
 * _strlen - calculate length of string
 * @s: string
 * Return: length of string.
 */

int _strlen(const char *s)
{
	unsigned int v;

	for (v = 0; (s[v] != '\0'); v++)
	{
	}
	return (v);
}
