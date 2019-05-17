#include "monty.h"

/**
* _swap: entry point of the function
* @stack: stack that receives
* @line_number: Number that receives
* Return: 0 if sucess
*/

void _swap(stack_t **stack, unsigned int line_number)
{
	int i;

	for(i = 0; i < 20; i++)
	{
		if(len(stack) < 2)
		{
		printf("L%d: can't swap, stack too short", i);
		}
	}
}
