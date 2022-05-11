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

	if (isdigit(data) != 0)
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	if (!stack || !*stack)
	{
		newNode->n = data;
		newNode->next = NULL;
		newNode->prev = NULL;
		*stack = newNode;
	}
	else
	{
		while ((*stack)->next != NULL)
		{
			*stack = (*stack)->next;
		}
		newNode->n = data;
		newNode->next = NULL;
		newNode->prev = *stack;
		(*stack)->next = newNode;
	}

	while ((*stack)->next != NULL)
	{
		*stack = (*stack)->next;
	}
}
