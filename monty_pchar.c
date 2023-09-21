#include "monty.h"

/**
 * pchar - Prints the character at the top of the stack.
 * @head: Pointer to the head of the stack
 * @line_number: Current line number being executed
 */
void pchar(stack_t **head, unsigned int line_number)
{
	int value = (*head)->n;
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (value >= 0 && value <= 127)
	{
		putchar((char)value);
		putchar('\n');
	}
	else
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
}
