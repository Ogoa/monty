#include "monty.h"

/**
 * print_stack - Prints all elements in the stack
 * @stack: Address of the pointer to the node at the top of the stack
 * @line_number: Line number of the instruction in the monty file
 *
 * Return: Nothing
 */
void print_stack(stack_t **stack, UNUSED unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL)
		return;
	temp = *stack;
	while (temp)
	{
		fprintf(stdout, "%d\n", temp->n);
		temp = temp->prev;
	}
}
