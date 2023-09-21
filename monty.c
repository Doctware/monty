#include "monty.h"
#include <stdio.h>

#define MAX_LINE_LENGTH 1024

/**
 * main - The main
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Return value indicating success or failure
 */

int main(int argc, char *argv[])
{
	/*char *line = NULL;
	size_t len = 0;*/
	char line[MAX_LINE_LENGTH];
	unsigned int line_number = 0;
	char *tokens, *lineptr = NULL;
	unsigned int counter = 0;
	stack_t *head = NULL;
	/*ssize_t read_file;
	size_t bufsize;*/
	FILE *fl;
	/*int mode = 0;*/

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fl = fopen(argv[1], "r");
	if (!fl)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	for (line_number = 1; fgets(line, sizeof(line), fl) != NULL; line_number++)
	{
		
		if (line[0] == '#')
			continue;

		tokens = strtok(lineptr, LIMITER);
		counter++;
		if (tokens)
			select_func(&head, tokens, counter);

		else if (!tokens)
			continue;

	}
	if (lineptr)
		free(lineptr);
	pop_free(&head);
	fclose(fl);
	exit(EXIT_SUCCESS);
}

/*void select_func(stack_t **head, char *token, unsigned int counter, int *mode)
{
	else if (strcmp(token, "stack") == 0)
	{
		set_stack_mode(head, mode);
	}
	else if (strcmp(token, "queue") == 0)
	{
		set_queue_mode(head, mode);
	}
}*/
