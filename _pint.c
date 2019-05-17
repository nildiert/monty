#include "monty.h"
/**
 *_pint - print the top of the stack
 *@stack: pointer to the stack
 *@line_number: the line number
 *Return: nothing
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	head = *stack;
	if (head == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}
