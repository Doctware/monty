#ifndef MONTY_H
#define MONTY_H	

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <ctype.h>

#define LIMITER " \n"


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* function prototypes */
void pall(stack_t **head, unsigned int counter);
void push(stack_t **head, unsigned int counter);
void pint(stack_t **head, unsigned int counter);
void swap(stack_t **head, unsigned int counter);
void pop(stack_t **head, unsigned int counter);
void nop(stack_t **head, unsigned int counter);
void add(stack_t **head, unsigned int counter);
void sub(stack_t **head, unsigned int counter);
void mul(stack_t **head, unsigned int counter);
void _div(stack_t **head, unsigned int counter);
void mod(stack_t **head, unsigned int line_number);
void pchar(stack_t **head, unsigned int line_number);
void pstr(stack_t **head, unsigned int line_number);
void rot1(stack_t **head, unsigned int line_number);
void rotr(stack_t **head, unsigned int line_number);

/* Selector*/
void select_func(stack_t **head, char *token, unsigned int counter);

/* Free memory */
void pop_free(stack_t **head);

/* Set mode functions */
void set_stack_mode(stack_t **stack, int *mode);
void set_queue_mode(stack_t **stack, int *mode);
#endif /* _MONTY_H_ */
