#include "monty.h"

/**
 * print_top - Prints the value at the top of the stack
 * @stack: Address of the pointer to the node at the top of the stack
 * @line_number: Line number of the instruction in the monty file
 *
 * Return: Nothing
 */
void print_top(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%d\n", (*stack)->n);
}
