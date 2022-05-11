#include "monty.h"
/**
 * mul - multiplies the last two elements of the stack
 *@stack: stack of file lines
 *@line_number: number of file lines
 *
 * Return: void
 */
void mul(stack_t **stack, unsigned int line_number)
{
	if (*stack && (*stack)->prev)
	{
		(*stack)->prev->n *= (*stack)->n;
		pop(stack, line_number);
	}
	else
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
