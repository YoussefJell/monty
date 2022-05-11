#include "monty.h"
/**
 * pall - print reversed stack
 * @stack: stack of file lines
 * @line_number: number of file lines
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tail;

	(void)line_number;

	if (*stack)
	{
		tail = *stack;
		while (tail != NULL)
		{
			printf("%d\n", tail->n);
			tail = tail->next;
		}
	}
}
