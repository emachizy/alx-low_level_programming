#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *place = h;
	size_t count = 0;

	while (place != NULL)
	{
		printf("%d\n", place->n);
		count += 1;
		place = place->next;
	}
	return (count);
}
