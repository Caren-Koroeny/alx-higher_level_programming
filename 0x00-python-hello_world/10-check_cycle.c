#include "lists.h"
#include <stdio.h>

/**
  * check_cycle - Checks if a singly linked list has a cycle in it
  * @list: The singly linked list to check
  *
  * Return: 1 if has a cycle in it or 0 if not
  */
int check_cycle(listint_t *list)
{
	listint_t *list1 = list, *list2 = list;
	int found = 0;

	while ((list1 && list2) && list2->next)
	{
		list1 = list1->next;
		if (list2->next || list2->next->next)
			list2 = list2->next->next;
		else
			break;

		if (list1 == list2)
		{
			found = 1;
			break;
		}
	}

	return (found);
}
