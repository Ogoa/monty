#include "monty.h"

/**
 * rotl_opcode - Rotates the stack to the top
 * @stack: Address of the pointer to the node at the top of the stack
 * @line_number: Line number of the opcode in the monty file
 *
 * Return: Nothing
 * Description: The top element becomes the last one, and the second
 * element becomes the first one
 */
void rotl_opcode(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *new_top;

	if (stack == NULL || *stack == NULL || (*stack)->prev == NULL)
		return;
	temp = *stack;
	new_top = (*stack)->prev;
	while (temp->prev)
		temp = temp->prev;
	temp->prev = *stack;
	(*stack)->next = temp;
	(*stack)->prev = NULL;
	*stack = new_top;
	new_top->next = NULL;
}
