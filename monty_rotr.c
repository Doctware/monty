#include "monty.h"

/**
 * rotr - Rotate the stack to the bottom
 * @head: Double pointer to the head of the stack
 * @line_number: Current line number in the Monty bytecode file
 */
void rotr(stack_t **head, unsigned int line_number)
{
	stack_t *current = *head;
	stack_t *prev = NULL;

	(void)line_number;

	if (current != NULL && current->next != NULL)
	{
		while (current->next != NULL)
		{
			prev = current;
			current = current->next;
		}

		prev->next = NULL;
		current->next = *head;
		*head = current;
	}
}
