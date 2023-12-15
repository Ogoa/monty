#include "monty.h"

/**
 * free_stack - Frees the current stack before exiting the program
 * @stack: Address of the pointer to the node at the top of the stack
 *
 * Return: Nothing
 */
void free_stack(stack_t **stack)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL)
		return;
	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->prev;
		free(temp);
	}
}
