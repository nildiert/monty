#include "monty.h"
/**
 *_pall - this is the main function to process all functions
 *
 * @stack: stack that receives
 * @line_number: Number that receives
 *Return: 0
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *h;

	(void)line_number;
	h = *stack;
	if (!h)
		return;
	while (h)
	{
		printf("%d \n", h->n);
		h = h->next;
	}
}
