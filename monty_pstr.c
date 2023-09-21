#include "monty.h"

/**
 * pstr - Prints the string starting at the top of the stack
 * @head: Double pointer to the head of the stack
 * @line_number: Current line number in the Monty bytecode file
 */
void pstr(stack_t **head, unsigned int line_number)
{
	stack_t *current = *head;
	(void)line_number;

	while (current != NULL && current->n != 0)
	{
		if (current->n < 0 || current->n > 127)
			break;

		putchar(current->n);
		current = current->next;
	}
	putchar('\n');
}
