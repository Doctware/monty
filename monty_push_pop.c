#include "monty.h"

/**
 * push - Pushes an element onto the stack
 * @stack: A pointer to the top of the stack
 * @value: The integer value to push onto the stack
 */
void push(stack_t **stack, int value)
{
	/* create a new stack node */
	stack_t *new_node = malloc(sizeof(stack_t));


	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;

	if (*stack)
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	else
	{
		new_node->next = NULL;
	}
	*stack = new_node;
}

/**
 * pall - prints all the values on the stack
 * @stack: A pinter to the top of the stack
 */
void pall(stack_t **stack)
{
	stack_t *current = *stack;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
