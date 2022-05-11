#include "monty.h"
/**
 * div - divides the last two elements of the stack
 *@stack: stack of file lines
 *@line_number: number of file lines
 *
 * Return: void
 */
void div(stack_t **stack, unsigned int line_number)
{
	if (*stack && (*stack)->prev)
	{
		if ((*stack)->n == 0)
		{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
		}
		else
		{
		(*stack)->prev->n /= (*stack)->n;
		pop(stack, line_number);
		}
	}
	else
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
