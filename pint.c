#include "monty.h"
void pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
	}
	else
	{
		if ((*stack)->next != NULL)
			*stack = (*stack)->next;
		printf("%d\n", (*stack)->n);
	}
}
