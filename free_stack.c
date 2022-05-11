#include "monty.h"
/**
 * free_stack - free the stack list
 * @head: head of list
 */
void free_stack(stack_t *head)
{
	stack_t *ptr = head, *ptrnext;

	while (ptr != NULL)
	{
		ptrnext = ptr->next;
		free(ptr);
		ptr = ptrnext;
	}
}
