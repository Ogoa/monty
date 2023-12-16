#include "monty.h"

/**
 * pchar_opcode - Prints the char at the top of the stack
 * @stack: Address of the pointer to the node at the top of the stack
 * @line_number: Line number of the opcode in the monty file
 *
 * Return: Nothing
 */
void pchar_opcode(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 33 || (*stack)->n > 126)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range \n", line_number);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%c\n", (*stack)->n);
}
