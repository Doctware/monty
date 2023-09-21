#include "monty.h"

/**
 * pop_free - Removes the top element of the stack
 * @head: head of the list
 * Return: None
 */

void pop_free(stack_t **head)
{
	stack_t *tmp;
	stack_t *head_list;

	head_list = *head;

	while (head_list)
	{
		tmp = head_list;
		head_list = head_list->next;
		free(tmp);
	}
}
