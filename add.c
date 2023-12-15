#include "monty.h"

/**
 * add - Adds the top two elements of the stack
 * @stack: Address of the pointer to the node at the top of the stack
 * @line_number: Line number of the opcode in the monty file
 *
 * Return: Nothing
 * Description: The result is stored in the second top element of the stack
 * and the top element is removed, so that at the end:
 * The top element of the stack contains the result
 * The stack is one element shorter
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL || (*stack)->prev == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack = temp->prev;
	(*stack)->next = NULL;
	(*stack)->n = (*stack)->n + temp->n;
	free(temp);
}
