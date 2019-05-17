#include "monty.h"

/**
 *_div - Divide two elements of the stack and combine nodes
 *@stack: List with the stack
 *@line_number: Line processed
 *Return: None
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *node;
	int size = 0;

	node = (*stack);

		while (node)
		{
			size++;
			node = node->next;
		}
	if (size < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	node = (*stack)->next;
	(*stack)->next->n /= (*stack)->n;
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	free(*stack);
	node->prev = NULL;
	(*stack) = node;
}
