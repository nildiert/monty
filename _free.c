#include "monty.h"
/**
 *_free - this is the main function to process all functions
 *
 * @stack: stack that receives
 *Return: 0
 */

void _free(stack_t **stack)
{
	stack_t *head;

	head = *stack;
	if (!head)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
