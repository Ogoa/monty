#include "monty.h"

/**
 * main - Execute the monty program
 * @argc: Number of arguments passed to the program
 * @argv: Array of argument strings passed to the program
 *
 * Return: Always 0 (Successful exit)
 */
int main(int argc, char **argv)
{
	FILE *monty_file;
	stack_t *stack = NULL;
	char *line = NULL;
	size_t line_len = 0;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	monty_file = fopen(argv[1], "r");
	if (!monty_file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (_getline(&line, &line_len, monty_file) != -1)
	{
		line_number++;
		execute_opcode(line, &stack, line_number);
	}
	if (line)
		free(line);
	free_stack(&stack);
	fclose(monty_file);
	return (0);
}
