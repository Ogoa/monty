#include "monty.h"
#include "val.h"

/**
 * push_stack - Pushes a new node to the top of the stack
 * @stack: Address of pointer to the current node at the top of the stack
 * @line_number: Line number of the instruction in the monty file
 *
 * Return: Nothing
 */
void push_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;

	if (val == NULL || is_number(val) == 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = atoi(val);
	new_node->next = NULL;
	new_node->prev = NULL;
	if (stack == NULL || *stack == NULL)
	{
		*stack = new_node;
	}
	else
	{
		new_node->prev = *stack;
		(*stack)->next = new_node;
		*stack = new_node; /* Point the top of the stack to the new node */
	}
}
