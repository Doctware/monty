#include "monty.h"

/**
 * set_stack_mode - Set the node to stack(LIFO)
 * @stack: Double pointer to the head of the stack
 * @mode: Pointer to the mode variable
 */
void set_stack_mode(stack_t **stack, int *mode)
{
	(void)stack;
	*mode = 0;
}

/**
 * set_queue_mode - Set the node to queue(FIFO)
 * @stack: Double pointer to the head of the stack
 * @mode: Pointer to the mode variabel
 */
void set_queue_mode(stack_t **stack, int *mode)
{
	(void)stack;
	*mode = 1;
}
