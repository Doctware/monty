#include "monty.h"

/**
 * main - The main
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Return value indicating success or failure
 */

int main(int argc, char *argv[])
{
<<<<<<< HEAD
	/* FILE *file; */
	char *line = NULL;
	size_t len = 0;
	unsigned int line_number = 0;
=======
	char *tokens, *lineptr = NULL;
	unsigned int counter = 0;
	stack_t *head = NULL;
	ssize_t read_file;
	size_t bufsize;
	FILE *fl;
>>>>>>> a27de31fa722514549c419ce6a7a8318a92bd28d

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

	while ((read_file = getline(&lineptr, &bufsize, fl)) != -1)
	{
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
