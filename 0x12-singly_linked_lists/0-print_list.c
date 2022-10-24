#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all the elements of list_t
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		nodes +=1;
		h = h->next;
	}
	return(nodes);
}
