#include "monty.h"
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
