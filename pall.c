#include "main.h"
void pall(stack_t **stack, unsigned int line_number)
{
	while ((*stack)->prev != NULL)
	{
		printf("%d\n", (*stack)->n);
		*stack = (*stack)->prev;
	}
	printf("%d\n", line_number);
}
