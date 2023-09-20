#include "monty.h"
/**
 * pop - Removes the top element of the stack
 * @stack: Apointer to the top of the stack
 */
void pop(stack_t **stack)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;
	if (*stack)
	{
		(*stack)->prev = NULL;
	}
	free(temp);
}
