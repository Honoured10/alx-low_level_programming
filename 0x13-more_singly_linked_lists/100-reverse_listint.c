#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Head of the list
 *
 * Return: Tail of the list as head
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next;

	prev = next = NULL;
	current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}
