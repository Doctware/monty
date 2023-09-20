#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	char *line = NULL;
	size_t len = 0;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	FILE *file = fopen(argv[1], "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&line, &len, file) != -1)
	{
		line_number++;
	}
	free(line);
	fclose(file);
	return (EXIT_SUCCESS);
}
