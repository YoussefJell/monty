#include "monty.h"
/**
 * swap - swaps the last two elements of the stack
 * @stack: stack of file lines
 * @line_number: number of file lines
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if (*stack && (*stack)->prev)
	{
		tmp = (*stack)->n;
		(*stack)->n = (*stack)->prev->n;
		(*stack)->prev->n = tmp;
	}
	else
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
