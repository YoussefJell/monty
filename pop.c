#include "monty.h"
/**
 * pop - pops the last element of the stack
 * @stack: stack of file lines
 * @line_number: number of file lines
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tail;

	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->prev == NULL)
	{
		free(*stack);
		*stack = NULL;
		return;
	}

	tail = *stack;
	*stack = (*stack)->prev;
	free(tail);
	(*stack)->next = NULL;
	return;
}
