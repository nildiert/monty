#include "monty.h"
/**
 *swap - function that swaps the values in the list
 *@stack: pointer to the stack
 *@line_number: the number of lines that recives
 *Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1;
	stack_t *tmp2;
	int value;
	int len;

	len = len_stack(stack);

	if (len < 2)
	{
		fprintf(stderr, "can't swap, stack too short %u\n", line_number);
	}
	tmp1 = (*stack);
	tmp2 = tmp1->next;
	value = tmp1->n;
	tmp1->n = tmp2->n;
	tmp2->n = value;
}
/**
 *len_stack - return the len of the arg list
 *@stack: pointer to the stack
 *Return: size
 */
int len_stack(stack_t **stack)
{
	stack_t *counter;
	int size = 0;

	counter = *stack;
	while (counter != NULL)
	{
		counter = counter->next;
		size++;
	}

	return (size);
}
