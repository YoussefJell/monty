#include "monty.h"
/**
 * free_stack - free the stack list
 * @stack: top of stack
 */
void free_stack(stack_t **stack)
{
	stack_t *ptr = *stack, *ptrnext;

	while (ptr != NULL)
	{
		ptrnext = ptr->prev;
		free(ptr);
		ptr = ptrnext;
	}
}
