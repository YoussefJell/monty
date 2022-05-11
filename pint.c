#include "monty.h"
/**
 * pint - prints the last element of the stack
 * @stack: stack of file lines
 * @line_number: number of file lines
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", (*stack)->n);
	}
}
