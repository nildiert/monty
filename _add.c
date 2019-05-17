#include "monty.h"

/**
 *_add - Add two elements of the stack and combine nodes
 *@stack: List with the stack
 *@line_number: Line processed
 *Return: None
 */
void _add(stack_t **stack, unsigned int line_number)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	node = (*stack)->next;
	(*stack)->next->n += (*stack)->n;
	free(*stack);
	node->prev = NULL;
	(*stack) = node;
}
