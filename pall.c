#include "main.h"
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tail = (*stack)->next;

	while (tail != NULL)
	{
		printf("%d\n", tail->n);
		tail = tail->prev;
	}
	printf("this is line number%d\n", line_number);
}
