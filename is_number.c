#include "monty.h"

/**
 * is_number - Evaluates if a string literal is a number
 * @str: The string being evaluated
 *
 * Return: 1 if `str` is a number, otherwise 0
 */
int is_number(const char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (!isdigit(*(str + i)) && (i == 0 && *(str + i) != '-'))
			return (0);
	}
	return (1);
}
