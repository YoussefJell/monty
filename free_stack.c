#include "monty.h"
/**
 * free_stack - free the stack list
 * @head: head of list
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
