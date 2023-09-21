#include "monty.h"

/**
 * rot1 - Rotate the stack to the top
 * @head: Double pointer to the head of the stack
 * @line_number: Current line number in the Monty bytcode file
 */
void rot1(stack_t **head, unsigned int line_number)
{
	stack_t *temp, *current = *head;

	(void)line_number;

	if (current != NULL && current->next != NULL)
	{
		temp = current;
		*head = current->next;

		while (current->next != NULL)
			current = current->next;

		current->next = temp;
		temp->next = NULL;
	}
}
