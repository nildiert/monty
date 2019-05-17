#include "monty.h"
/**
 *_pop - remove the first element in the stack
 *@stack: pointer to the stack
 *@line_number: the line
 *Return: nothing
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	head = *stack;
	if (head == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	head = (*stack)->next;
	free(*stack);
	*stack = head;
}
