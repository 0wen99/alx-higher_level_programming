#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 *
 * @list: linked list to check
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 *
 */

int check_cycle(listint_t *list)
{
	listint_t *lts = list;
	listint_t *aux = lts;

	while (lts && aux && lts->next)
	{
		aux = aux->next;
		lts = lts->next->next;
		if (aux == lts)
			return (1);
	}
	return (0);
}
