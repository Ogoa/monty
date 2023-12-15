#include "monty.h"

/**
 * isEmpty - Evaluates if the stack is empty or not
 * @stack: Address of pointer to the node at the top of the stack
 *
 * Return: 1 is the stack is empty, otherwise 0
 */
int isEmpty(stack_t **stack)
{
	if (stack == NULL || *stack == NULL)
		return (0);
	return (1);
}
