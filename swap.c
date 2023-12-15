#include "monty.h"

/**
 * swap - Swaps the top two elements in a stack
 * @stack: Address of the pointer to the node at the top of the stack
 * @line_number: Line number of the opcode in the file
 *
 * Return: Nothing
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL || (*stack)->prev == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack = temp->prev;
	temp->prev = (*stack)->prev;
	temp->next = *stack;
	(*stack)->prev->next = temp;
	(*stack)->prev = temp;
	(*stack)->next = NULL;
}
