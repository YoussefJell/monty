#include "monty.h"
/**
 * push - adds element on top of the stack
 * @stack: stack of file lines
 * @line_number: number of file lines
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *newNode = malloc(sizeof(stack_t));

	(void)line_number;

	newNode->n = data;
	if (*stack)
	{
		newNode->next = *stack;
		newNode->prev = (*stack)->prev;
		(*stack)->prev = newNode;
		*stack = newNode;
		return;
	}
	newNode->next = *stack;
	newNode->prev = NULL;
	*stack = newNode;
}
