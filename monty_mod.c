#include "monty.h"

/**
 * mod - Computes the rest of the division of the second top element
 * by the top element of the stack.
 * @head: Pointer to the head of the stack.
 * @line_number: Current line number being executed
 */
void mod(stack_t **head, unsigned int line_number)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: cant mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*head)->next->n %= (*head)->n;
	pop(head, line_number);
}
