#include "monty.h"
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tail = *stack;

	if ((*stack)->next)
	{
		tail = tail->next;
	}
	if (!tail)
	{
		printf("L%d: can't pall, stack is empty\n", line_number);
	}
	else
	{
		while (tail != NULL)
		{
			printf("%d\n", tail->n);
			tail = tail->prev;
		}
	}
}
