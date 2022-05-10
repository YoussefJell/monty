#include "main.h"
/**
 * push - adds node at end
 * @head: head of list
 * @n: new data
 * Return: Always EXIT_SUCCESS.
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *newNode = malloc(sizeof(stack_t));

	if (isdigit(data) != 0)
	{
		printf("L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	if (!stack || !*stack)
	{
		newNode->n = data;
		newNode->next = *stack;
		newNode->prev = NULL;
		*stack = newNode;
		printf("%d\n", (*stack)->n);
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
		printf("%d\n", (*stack)->next->n);
	}
}
