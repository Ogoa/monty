#include "monty.h"

/**
 * pop_stack - Removes the node currently at the top of the stack
 * @stack: Address of pointer to the node at the top of the stack
 * @line_number: Line number of the instruction in the monty file
 *
 * Return: Nothing
 */
void pop_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	/* Move the top to the second node from the current top */
	*stack = temp->prev;
	if (*stack)
		(*stack)->next = NULL;
	free(temp);
}
