#include "monty.h"
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tail;

	(void)line_number;

	if (*stack)
		tail = *stack;
	else
		return;

	if (tail)
	{
		while (tail != NULL)
		{
			printf("%d\n", tail->n);
			tail = tail->prev;
		}
	}
}
