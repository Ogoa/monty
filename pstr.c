#include "monty.h"

/**
 * pstr_opcode - Prints the string starting at the top of the stack
 * @stack: Address of the pointer to the node at the top of the stack
 * @line_number: Line number of the opcode in the monty file
 *
 * Return: Nothing
 * Description: Integer stored in each element of the stack is treated as
 * the ASCII value of the character to be printed
 * The string stops when either:
 * The stack is over, the value of the element is 0, or the value of the
 * element is not in the ASCII table
 */
void pstr_opcode(stack_t **stack, UNUSED unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stdout, "\n");
		return;
	}
	temp = *stack;
	while (temp && temp->n && (temp->n > 0 && temp->n < 128))
	{
		fprintf(stdout, "%c", temp->n);
		temp = temp->prev;
	}
	fprintf(stdout, "\n");
}
