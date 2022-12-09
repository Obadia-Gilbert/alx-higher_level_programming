#include "lists.h"

/**
* print_dlistint - a function that prints all the elements
*of a dlistint_t list.
* @h: pointer that point to a linked list
* Return: node number
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;

	size_t i = 0;

	if (!h)
		return (0);

	ptr = h;

	while (ptr != NULL)
	{
		i += 1;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (i);
}
