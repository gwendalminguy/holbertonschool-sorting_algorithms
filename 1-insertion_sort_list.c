#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list in ascending order
 * @list: the doubly linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *node;

	/* Going through each node of the list */
	while (current != NULL)
	{
		node = current;

		/* Moving the node if n is lower than n in the previous node */
		while (node->prev != NULL && node->n < node->prev->n)
		{
			if (node->next == NULL)
				node->prev->next = NULL;
			else
			{
				node->prev->next = node->next;
				node->next->prev = node->prev;
			}

			node->next = node->prev;
			if (node->prev->prev == NULL)
				node->prev = NULL;
			else
				node->prev = node->prev->prev;

			if (node->prev != NULL)
				node->prev->next = node;
			else
				*list = node;

			node->next->prev = node;

			/* Printing the list */
			print_list(*list);
		}

		current = current->next;
	}
}
