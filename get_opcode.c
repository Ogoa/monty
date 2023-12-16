#include "monty.h"

/**
 * get_opcode - Links a specific opcode to its function implementation
 * @opcode: String specifying the opcode argument
 *
 * Return: Pointer to a function that handles the opcode, otherwise
 * NULL if no match is found
 */
void (*get_opcode(const char *opcode))(stack_t **stack, unsigned int line_number)
{
	instruction_t opcodes[] = {
		{"push", push_stack},
		{"pall", print_stack},
		{"pint", print_top},
		{"pop", pop_stack},
		{"swap", swap},
		{"add", add_opcode},
		{"sub", sub_opcode},
		{"div", div_opcode},
		{"mul", mul_opcode},
		{"mod", mod_opcode},
		{NULL, NULL}
	};
	int i = 0;

	if (opcode == NULL)
		return (NULL);
	while (opcodes[i].opcode)
	{
		if (strcmp(opcode, opcodes[i].opcode) == 0)
			return (opcodes[i].f);
		i++;
	}
	return (NULL);
}
