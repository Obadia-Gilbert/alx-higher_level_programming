#include "lists.h"

/**
* dlistint_len - a function that returns the number
*of elements in a linked
* @h: pointer that point to a linked list
* Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t i = 0;

	if (!h)
		return (0);

	ptr = h;

	while (ptr != NULL)
	{
		i += 1;
		ptr = ptr->next;
	}

	return (i);
}
