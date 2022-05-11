#include "monty.h"
/**
 * sub - substracts the last two elements of the stack
 *@stack: stack of file lines
 *@line_number: number of file lines
 *
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_number)
{
	if (*stack && (*stack)->prev)
	{
		(*stack)->prev->n -= (*stack)->n;
		pop(stack, line_number);
	}
	else
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
