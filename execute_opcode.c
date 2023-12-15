#include "monty.h"
#include "val.h"

/**
 * execute_opcode - Executes the opcode in the order they appear in the monty
 * byte code file
 * @line: Current line read in the monty file
 * @stack: Address of the pointer to the current stack
 * @line_number: Line number of `line`
 *
 * Return: Nothing
 */
void execute_opcode(char *line, stack_t **stack, unsigned int line_number)
{
	char *opcode;
	void (*func)(stack_t **stack, unsigned int line_number);

	opcode = strtok(line, " \n\t");
	val = strtok(NULL, " \n\t");
	func = get_opcode(opcode);
	if (func == NULL)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
	}
	func(stack, line_number);
}
